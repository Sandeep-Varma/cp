#include <bits/stdc++.h>
using namespace std;

int n,m;

vector<vector<int>> a;
// depth of each node
vector<vector<bool>> c;
// each node is yet to be covered or already covered

int BFS(int i, int j){
	int ans = 0;
	c[i][j] = 0;
	queue<pair<int,int>> Q;
	Q.push({i,j});
	while(Q.size() != 0){
		pair<int,int> u = Q.front();
		int i = u.first, j = u.second;
		ans+=a[i][j];
		if (i > 0 && c[i-1][j] && a[i-1][j]){
			Q.push({i-1,j});
			c[i-1][j] = 0;
		}
		if (j > 0 && c[i][j-1] && a[i][j-1]){
			Q.push({i,j-1});
			c[i][j-1] = 0;
		}
		if (i < n-1 && c[i+1][j] && a[i+1][j]){
			Q.push({i+1,j});
			c[i+1][j] = 0;
		}
		if (j < m-1 && c[i][j+1] && a[i][j+1]){
			Q.push({i,j+1});
			c[i][j+1] = 0;
		}
		Q.pop(); // remove u from queue
	}
	return ans;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int T; cin>>T;
	while(T--){
		cin>>n>>m;
		int M = 0;
		a = vector<vector<int>>(n,vector<int>(m));
		c = vector<vector<bool>>(n,vector<bool>(m,1));
		for (int i=0; i<n; i++) for (int j=0; j<m; j++) cin>>a[i][j];
		for (int i=0; i<n; i++) for (int j=0; j<m; j++) if (c[i][j] && a[i][j]) M = max(M,BFS(i,j));
		cout<<M<<endl;
	}
}