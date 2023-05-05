#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> graph;
vector<set<int>> cycles;
unordered_map<int,int> mi;

void dfs_cycle(int u, int p, int color[], int par[], int& cyclenumber)
{
 
    // already (completely) visited vertex.
    if (color[u] == 2) {
        return;
    }
 
    // seen vertex, but was not completely visited -> cycle detected.
    // backtrack based on parents to find the complete cycle.
    if (color[u] == 1) {
        set<int> v;
        cyclenumber++;
           
        int cur = p;
        v.insert(cur);
        mi[cur] = cycles.size();
 
        // backtrack the vertex which are
        // in the current cycle thats found
        while (cur != u) {
            cur = par[cur];
            v.insert(cur);
            mi[cur] = cycles.size();
        }
          cycles.push_back(v);
        return;
    }
    par[u] = p;
 
    // partially visited.
    color[u] = 1;
 
    // simple dfs on graph
    for (int v : graph[u]) {
 
        // if it has not been visited previously
        if (v == par[u]) {
            continue;
        }
        dfs_cycle(v, u, color, par, cyclenumber);
    }
 
    // completely visited.
    color[u] = 2;
}

void printCycles(int& cyclenumber)
{
    // print all the vertex with same cycle
    for (int i = 0; i < cyclenumber; i++) {
        // Print the i-th cycle
        cout << "Cycle Number " << i + 1 << ": ";
        for (int x : cycles[i])
            cout << x << " ";
        cout << endl;
    }
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n,m; cin>>n>>m;
    graph = vector<vector<int>>(n+1);
    vector<pair<int,int>> e(m);
    for (int i=0; i<m; i++){
        cin>>e[i].first>>e[i].second;
        graph[e[i].first].push_back(e[i].second);
        graph[e[i].second].push_back(e[i].first);
    }
    
    int color[n+1];
    int par[n+1];
 
    // store the numbers of cycle
    int cyclenumber = 0;
    // int edges = e.size();
 
    // call DFS to mark the cycles
    dfs_cycle(1, 0, color, par, cyclenumber);
 
    // function to print the cycles
    // printCycles(cyclenumber);

    set<int> is;
    for (int i=0; i<cyclenumber; i++){
        for (int j=i+1; j<cyclenumber; j++){
            is = {};
            set_intersection(cycles[i].begin(),cycles[i].end(),cycles[j].begin(),cycles[j].end(),std::inserter(is,is.begin()));
            if (is.size()){
                is = {};
                for (auto z:cycles[i]) mi[z] = j;
                set_union(cycles[i].begin(),cycles[i].end(),cycles[j].begin(),cycles[j].end(),std::inserter(is,is.begin()));
                cycles[i] = {};
                cycles[j] = is;
            }
        }
    }

    // printCycles(cyclenumber);

    unordered_map<int,int> ni;

    vector<set<int>> nodes;

    for (int a=1; a<=n; a++){
        if (mi.count(a)){
            if (cycles[mi[a]].size()){
                for (auto my_it: cycles[mi[a]]) ni[my_it] = nodes.size();
                nodes.push_back(cycles[mi[a]]);
                cycles[mi[a]] = {};
            }
        }
        else{
            ni[a] = nodes.size();
            nodes.push_back({a});
        }
    }

    vector<int> nl(nodes.size(),0);

    // cout<<endl<<"Nodes:"<<endl;


    set<pair<int,int>> e_new;
    unordered_map<int,int> edg_p;

    for (auto my_it: e){
        if (ni[my_it.first] != ni[my_it.second]){
            e_new.insert({min(ni[my_it.first],ni[my_it.second]),max(ni[my_it.first],ni[my_it.second])});
            edg_p[min(ni[my_it.first],ni[my_it.second])]=max(ni[my_it.first],ni[my_it.second]);
        }
        else nl[ni[my_it.first]]++;
    }

    // for (int my = 0; my<nodes.size(); my++){
    //     cout<<"Node: "<<nl[my]<<" :";
    //     for(auto my1: nodes[my]) cout<<my1<<" ";
    //     cout<<endl;
    // }

    int nstart = 0;
    while(edg_p.count(nstart)){
        nstart = edg_p[nstart];
    }

    

    vector<vector<int>> ans(nodes.size(),vector<int>(nodes.size(),-1));

    for (int index = 0; index<ans.size(); index++){
        ans[index][index] = nl[index];
    }

    // cout<<"Hello"<<endl;

    for (auto edge:e_new){
        ans[edge.first][edge.second] = ans[edge.first][edge.first] + ans[edge.second][edge.second];
        ans[edge.second][edge.first] = ans[edge.first][edge.second];
    }

    for (int len = 2; len<nodes.size(); len++){
        for (int j=0; j<nodes.size(); j++){
            for (int k=j+1; k<nodes.size(); k++){
                if (ans[j][k] == -1){
                    for (auto it=e_new.lower_bound({j,0}); it!=e_new.lower_bound({j+1,0}); it++){
                        if (ans[it->second][k] != -1){
                            ans[j][k] = ans[j][j] + ans[it->second][k];
                            ans[k][j] = ans[j][k];
                        }
                    }
                }
            }
        }
    }

    int q; cin>>q;
    while(q--){
        int x,y; cin>>x>>y;
        cout<<ans[ni[x]][ni[y]]<<endl;
    }
}