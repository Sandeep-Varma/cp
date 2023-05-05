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
	
	int shortest_distance(int u, int v){
	// returns the shortest distance between u and v
	// returns -1 if u and v are not connected
		vector<int> d;
		// distance of nodes from u
		vector<int> p;
		// respective predecessors of nodes in the tree with u as root
		BFS(u,d,p);
		// perform a breadth first search with u a source vertex
		return d[v];
		// -1 is returned if v in not reachable from u
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