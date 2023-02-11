#include <bits/stdc++.h>
using namespace std;

unordered_map<int,int> p;
int nodes = 0;
int unions = 0;

int n,m;
vector<pair<int,int>> v;

int find_root(int x){
	if (p[x] != x) p[x] = find_root(p[x]);
	return p[x];
}

void set_union(int x, int y){
	if (find_root(x) != find_root(y)){
		p[p[y]] = p[x];
		unions++;
	}
}

unordered_map<int,vector<int>> all_sets(){
	unordered_map<int,vector<int>> s;
	for (auto z:v){
		int i = z.first, j = z.second;
		int x = i*m+j;
		s[find_root(x)].push_back(x);
	}
	return s;
}


int main(){
	cin>>n>>m;
	char x;
	for (int i=0; i<n; i++){
		for (int j=0; j<m; j++){
			cin>>x;
			if (x == '.'){
				nodes++;
				v.push_back({i,j});
				p[i*m+j] = i*m+j;
			}
		}
	}
	for (auto z:v){
		int i = z.first, j = z.second;
		int x = i*m+j, y;
		if (i+1 < n){
			y = (i+1)*m+j;
			if (p.count(y)) set_union(x,y);
		}
		if (i-1 >=0){
			y = (i-1)*m+j;
			if (p.count(y)) set_union(x,y);
		}
		if (j+1 < m){
			y = i*m+j+1;
			if (p.count(y)) set_union(x,y);
		}
		if (j-1 >=0){
			y = i*m+j-1;
			if (p.count(y)) set_union(x,y);
		}
	}

	// unordered_map<int,vector<int>> ALL_SETS = all_sets();
	// for (auto x:ALL_SETS){
	// 	for (auto y:x.second) cout<<"{"<<y/m<<","<<y%m<<"} ";
	// 	cout<<endl;
	// }

	cout<<nodes-unions<<endl;
}