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

	void two_color(int source, vector<int> &color){
		color[source] = 1;
		queue<int> Q;
		Q.push(source);
		while(Q.size() != 0){
			int u = Q.front();
			for (auto v: neighbours[u]){
				if (color[v] == 0){
					color[v] = 3-color[u];
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
	while(m--){
		cin>>x>>y;
		G.add_edge(x-1,y-1);
		G.add_edge(y-1,x-1);
	}

	vector<int> color(n,0);

	G.two_color(0,color);
	for (int i=0; i<n; i++){
		while(color[i] && i<n) i++;
		if (i == n) break;
		G.two_color(i,color);
	}

	bool flag = 0;

	for (int u=0; u<G.n; u++){
		for (auto v: G.neighbours[u]){
			if (color[u] == color[v]){
				flag = 1;
				break;
			}
		}
		if (flag) break;
	}

	if (flag) cout<<"IMPOSSIBLE"<<endl;
	else{
		for (auto x: color) cout<<x<<" ";
		cout<<endl;
	}
}