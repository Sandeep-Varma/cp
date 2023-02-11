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

char direction(pair<int,int> u, pair<int,int> v){
	if (u == v) return '_';
	else if (u.first == v.first){
		if (v.second == u.second + 1) return 'R';
		else if (v.second == u.second - 1) return 'L';
		else return 'X';
	}
	else if (u.second == v.second){
		if (v.first == u.first + 1) return 'D';
		else if (v.first == u.first - 1) return 'U';
		else return 'X';
	}
	else return 'X';
}

int main(){
	int n,m; cin>>n>>m;

	int source = -1, destination = -1;
	int node_count = 0;

	vector<pair<int,int>> node_locations;
	vector<vector<int>> v(n,vector<int>(m,-1));

	char x;
	for (int i=0; i<n; i++){
		for (int j=0; j<m; j++){
			cin>>x;
			if (x != '#'){
				node_locations.push_back({i,j});
				v[i][j] = node_count;
				if (x == 'A') source = node_count;
				else if (x == 'B') destination = node_count;
				node_count++;
			}
		}
	}

	graph G(node_count);

	for (int i=0; i<n; i++){
		for (int j=0; j<m; j++){
			if (i<n-1 && v[i][j] != -1 && v[i+1][j] != -1){
				G.add_edge(v[i][j],v[i+1][j]);
				G.add_edge(v[i+1][j],v[i][j]);
			}
			if (j<m-1 && v[i][j] != -1 && v[i][j+1] != -1){
				G.add_edge(v[i][j],v[i][j+1]);
				G.add_edge(v[i][j+1],v[i][j]);
			}
		}
	}

	vector<int> path = G.shortest_path(source,destination);
	// for (auto p: path)
	// 	cout<<node_locations[p].first<<","<<node_locations[p].second<<endl;

	if (path.size()){
		cout<<"YES"<<endl;
		cout<<path.size()-1<<endl;
		for (int i=1; i<path.size(); i++)
			cout<<direction(node_locations[path[i-1]],node_locations[path[i]]);
		cout<<endl;
	}
	else cout<<"NO"<<endl;
}