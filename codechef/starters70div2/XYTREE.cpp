#include <bits/stdc++.h>
using namespace std;

struct node{
	bool v = 0;
	vector<int> c;
};

void generate_tree(vector<struct node*> &node, vector<set<int>> &e, int i){
	node[i] = new struct node();
	set<int> s = e[i];
	for (auto ch:s){
		node[i]->c.push_back(ch);
		e[i].erase(ch);
		e[ch].erase(i);
		generate_tree(node,e,ch);
	}
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int T; cin>>T;
	while(T--){
		int n; cin>>n;
		vector<set<int>> e(n+1);
		int x,y;
		for (int i=0; i<n-1; i++){
			cin>>x>>y;
			e[x].insert(y);
			e[y].insert(x);
		}
		vector<struct node*> node(n+1);
		generate_tree(node,e,1);

		int q; cin>>q;
		int ans = n-1;
		while(q--){
			int x; cin>>x;
			if (x == 1){
				int i; cin>>i;
				if (node[i]->c.empty()){
					node[i]->v = 1;
					if (ans) ans--;
				}
				else{
					if (node[i]->v) continue;
					node[i]->v = 1;
					for (auto ch: node[i]->c){
						if (!(node[ch]->v)){
							node[i]->v = 0;
							break;
						}
					}
					if (node[i]->v && ans) ans--;
				}
			}
			else{
				if (ans) cout<<ans<<endl;
				else cout<<n-1<<endl;
			}
		}
	}
}