#include <bits/stdc++.h>
using namespace std;

vector<vector<bool>> matrix(int n, int m){
	if (n == 2 && m == 2) return vector<vector<bool>>{{1,0},{0,1}};
	if (n == 2){
		vector<vector<bool>> v(2);
		for (int i=0; i<m/2; i++){
			v[i%2].push_back(1);
			v[i%2].push_back(0);
			v[1-i%2].push_back(0);
			v[1-i%2].push_back(1);
		}
		return v;
	}
	if (m == 2){
		vector<vector<bool>> v;
		for (int i=0; i<n/2; i++){
			if (i%2){ v.push_back({1,0}); v.push_back({0,1});}
			else{ v.push_back({0,1}); v.push_back({1,0});}
		}
		return v;
	}
	vector<vector<bool>> v(n,vector<bool>(m)), v1 = matrix(n-2,m-2);
	for (int i=1; i<n-1; i++) for (int j=1; j<m-1; j++) v[i][j] = v1[i-1][j-1];
	v[0][0] = !v[1][1];
	for (int i=1; i<n; i++) v[i][0] = !v[i-1][0];
	for (int i=1; i<m; i++) v[0][i] = !v[0][i-1];
	for (int i=1; i<n; i++) v[i][m-1] = !v[i-1][m-1];
	for (int i=1; i<m; i++) v[n-1][i] = !v[n-1][i-1];
	return v;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T;
	cin>>T;
	while(T--){
		int n,m; cin>>n>>m;
		vector<vector<bool>> M = matrix(n,m);
		for(int i=0; i<n; i++){
			for (int j=0; j<m; j++){
				cout<<(M[i][j])<<" ";
			}
			cout<<endl;
		}
	}
}