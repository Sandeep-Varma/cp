// Proble link: https://www.codechef.com/problems/XYTREE

#include <bits/stdc++.h>
using namespace std;

void generate_tree(vector<int> &nc, vector<int> &p, vector<vector<int>> &e, int i, int j){
	p[i] = j; nc[i] = e[i].size()-1;
	for (auto ch:e[i]) if (ch != j) generate_tree(nc,p,e,ch,i);
}

int main(){
	int T; cin>>T;
	while(T--){
		int n; cin>>n;
		vector<int> nc(n+1,0); // nc[i] is no of children of node i
		vector<int>  p(n+1,0); // p[i] is the parent node of node i
		vector<bool> v(n+1,0); // v[i] is the value at node i

		vector<vector<int>> e(n+1); // e[i] is the vector of all neighbours of node i
		int x,y;
		for (int i=0; i<n-1; i++){
			cin>>x>>y;
			e[x].push_back(y);
			e[y].push_back(x);
		}
		generate_tree(nc,p,e,1,0);

		nc[1] = e[1].size();
		// For any node except root (i.e., 1), no of children = no of edges - 1
		// For root node, no of children = no of edges

		vector<int> ncv(n+1,0); // ncv[i] is the no of children of node i with value 1
		int ans = n-1; // initial number of good edges

		int q; cin>>q;
		while(q--){
			int x; cin>>x;
			if (x == 1){
				int i; cin>>i;
				if (v[i]) continue;
				if (nc[i] == ncv[i]){
					// condition always true for a leaf as nc[i] = ncv[i] = 0 for a leaf
					// for a non-leaf
					v[i] = 1;
					ncv[p[i]]++;
					ans--;
				}
			}
			else{
				if (ans >= 0) cout<<ans<<endl;
				// ans becomes negative only when value at all nodes is 1
				// Then all become good nodes again
				else cout<<n-1<<endl;
			}
		}
	}
}