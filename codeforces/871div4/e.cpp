#include <bits/stdc++.h>
using namespace std;

int n,m;
vector<vector<int>> a,g;

void change_grp(int i, int j, int g_new){
	int g_old = g[i][j];
	g[i][j] = g_new;
	if (i && g[i-1][j]==g_old) change_grp(i-1,j,g_new);
	if (i<n-1 && g[i+1][j]==g_old) change_grp(i+1,j,g_new);
	if (j && g[i][j-1]==g_old) change_grp(i,j-1,g_new);
	if (j<m-1 && g[i][j+1]==g_old) change_grp(i,j+1,g_new);
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int T; cin>>T;
	while(T--){
		cin>>n>>m;
		a = vector<vector<int>>(n,vector<int>(m));
		for (int i=0; i<n; i++) for (int j=0; j<m; j++) cin>>a[i][j];
		g = vector<vector<int>>(n,vector<int>(m));
		int G = 0;
		for (int i=0; i<n; i++) for (int j=0; j<m; j++){
			if (i && a[i-1][j] && a[i][j]) g[i][j] = g[i-1][j];
			else if (j && a[i][j-1] && a[i][j]) g[i][j] = g[i][j-1];
			else g[i][j] = G++;
		}
		for (int i=0; i<n; i++) for (int j=0; j<m; j++) {
			if (i<n-1 && a[i][j] && a[i+1][j] && g[i][j]!=g[i+1][j]) change_grp(i+1,j,g[i][j]);
			if (j<m-1 && a[i][j] && a[i][j+1] && g[i][j]!=g[i][j+1]) change_grp(i,j+1,g[i][j]);
		}
		vector<int> c(G);
		for (int i=0; i<n; i++) for (int j=0; j<m; j++) c[g[i][j]] += a[i][j];
		cout<<*max_element(c.begin(),c.end())<<endl;
	}
}