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

	void BFS(int source, vector<int> &dist){
		dist[source] = 0;
		queue<int> Q;
		Q.push(source);
		while(Q.size() != 0){
			int u = Q.front();
			for (auto v: neighbours[u]){
				if (dist[v] == -1){
					dist[v] = dist[u]+1;
					Q.push(v); // add neighbours of u to queue
				}
			}
			Q.pop(); // remove u from queue
		}
	}
};

int main(){
	int n,m; cin>>n>>m;
	graph G(n);
	int x,y;
	for (int i=0; i<m; i++){
		cin>>x>>y;
		G.add_edge(x-1,y-1);
		G.add_edge(y-1,x-1);
	}
	
	vector<int> d(n,-1);
	vector<pair<int,int>> output;
	G.BFS(0,d);
	for (int i=0; i<n; i++){
		while(d[i] != -1 && i<n) i++;
		if (i == n) break;
		G.BFS(i,d);
		output.push_back({1,i+1});
	}

	cout<<output.size()<<endl;
	for (auto e: output) cout<<e.first<<" "<<e.second<<endl;
}