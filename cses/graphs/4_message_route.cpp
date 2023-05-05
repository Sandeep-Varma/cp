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

	void BFS(int source, vector<int> &dist, vector<int> &pred){
		dist = vector<int>(n,-1);
		pred = vector<int>(n,-1);
		dist[source] = 0;
		queue<int> Q;
		Q.push(source);
		while(Q.size() != 0){
			int u = Q.front();
			for (auto v: neighbours[u]){
				if (dist[v] == -1 || dist[u]+1 < dist[v]){ 
					dist[v] = dist[u]+1;
					pred[v] = u;
					Q.push(v); // add neighbours of u to queue
				}
			}
			Q.pop(); // remove u from queue
		}
	}

	vector<int> shortest_path(int u, int v){
	// returns the vector containing the nodes on the shortest path between u and v including u and v
	// returns empty vector if no path exists
		vector<int> d;
		// distance of nodes from u
		vector<int> p;
		// respective predecessors of nodes in the tree with u as root
		BFS(u,d,p);
		// perform a breadth first search with u a source vertex
		if (d[v] == -1) return {};
		vector<int> reverse_path = {v};
		while(v != u){
			v = p[v];
			reverse_path.push_back(v);
		}
		return vector<int>(reverse_path.rbegin(),reverse_path.rend());
	}
};

int main(){
	int n,m; cin>>n>>m;
	int source = 0, destination = n-1;
	graph G(n);
	int x,y;
	for (int i=0; i<m; i++){
		cin>>x>>y;
		G.add_edge(x-1,y-1);
		G.add_edge(y-1,x-1);
	}

	vector<int> path = G.shortest_path(source,destination);
	
	if (path.size()){
		cout<<path.size()<<endl;
		for (auto x: path) cout<<x+1<<" ";
		cout<<endl;
	}
	else cout<<"IMPOSSIBLE"<<endl;
}