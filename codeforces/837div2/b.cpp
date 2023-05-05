#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int T; cin>>T;
	while(T--){
		int n,m; cin>>n>>m;
		vector<vector<int>> v;
		int x,y;
		for (int i=0; i<m; i++){
			cin>>x>>y;
			if (x<=y) v.push_back({x,y});
			else v.push_back({y,x});
		}
		sort(v.begin(),v.end());
		vector<int> L;
		int i=1, j=1, k=0;
		while(++j<=n){
			while(v[k][0] < i) k++;
			while(v[k][0] <= j){
				
			}
		}
	}
}