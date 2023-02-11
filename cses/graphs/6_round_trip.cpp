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
	pair<int,int> find_loop(int source, vector<int> &dist, vector<int> &pred){
		dist[source] = 0;
        pred[source] = -2;
		queue<int> Q;
		Q.push(source);
		while(Q.size() != 0){
			int u = Q.front();
			for (auto v: neighbours[u]){
                if (pred[v] == -1){
                    dist[v] = dist[u]+1;
					pred[v] = u;
					Q.push(v); // add neighbours of u to queue
				}
                else if (pred[u] != v){
                    if (dist[u] < dist[v]) return {u,v};
                    else return {v,u};
                }
			}
			Q.pop(); // remove u from queue
		}
        return {-1,-1};
	}
};

int main(){
    int n,m; cin>>n>>m;
    graph G(n);
	int a,b;
	while(m--){
		cin>>a>>b;
		G.add_edge(a-1,b-1);
		G.add_edge(b-1,a-1);
	}

	vector<int> dist(n,-1);
	vector<int> pred(n,-1);

	pair<int,int> x = G.find_loop(0,dist,pred);
	if (x == pair(-1,-1)){
        for (int i=0; i<n; i++){
            while(pred[i] != -1 && i<n) i++;
            if (i == n) break;
            x = G.find_loop(i,dist,pred);
            if (x != pair(-1,-1)) break;
	    }
    }

    if (x == pair(-1,-1)) cout<<"IMPOSSIBLE"<<endl;
    else{
        int y=x.first;
        int z=x.second;
        int l = dist[z]-dist[y];
        int count = 0;
        string to_print = "";
        vector<int> output = {z+1};
        while(l--){
            to_print += to_string(z+1)+" ";
            count++;
            z = pred[z];
        }
        while(z != y){
            to_print += to_string(z+1)+" ";
            count++;
            output.push_back(y+1);
            z = pred[z];
            y = pred[y];
        }
        to_print += to_string(y+1)+" ";
        count++;
        for (int i=output.size()-1; i>=0; i--){
            to_print += to_string(output[i])+" ";
            count++;
        }
        cout<<count<<endl;
        cout<<to_print<<endl;
    }
}