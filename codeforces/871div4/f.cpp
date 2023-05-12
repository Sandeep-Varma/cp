#include <bits/stdc++.h>
using namespace std;

class graph{
public:
	int n = 0; // number of nodes
	vector<vector<int>> neighbours;
	
	graph(int N){
		n = N;
		neighbours = vector<vector<int>>(N);
	}

	void add_edge(int u, int v){
		neighbours[u].push_back(v);
	}
};

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int T; cin>>T;
	while(T--){
		int n,m; cin>>n>>m;
		graph G(n);
		int u,v;
		for (int i=0; i<m; i++){
			cin>>u>>v;
			G.add_edge(u-1,v-1);
			G.add_edge(v-1,u-1);
		}
		map<int,int> M;
		for (auto x:G.neighbours) M[x.size()]++;
		map<int,int> f;
		for (auto x:M) f[x.second] = x.first;
		// If M contains 3 entries,
		// then f contains
		// 1   : x
		// x   : y+1
		// x*y : 1
		// so x is f[1] and y is f[f[1]]-1
		if (M.size() == 3) cout<<f[1]<<" "<<f[f[1]]-1<<endl;
		else{
			for (auto x: M) if (x.first != 1) cout<<x.first<<" "<<x.first-1<<endl;
		}
	}
}