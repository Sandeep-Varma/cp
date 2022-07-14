#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int n; cin>>n;
	vector<vector<int>> v;
	int x;
	for(int i=0; i<n; i++){
		cin>>x;
		int minx = 200000000, p = v.size();
		for (auto t=0; t<v.size(); t++){
			if (*(v[t].end()-1)>x && *(v[t].end()-1)<minx){
				minx = *(v[t].end()-1);
				p = t;
			}
		}
		if (p==v.size()) v.push_back({x});
		else v[p].push_back(x);
	}
	cout<<v.size()<<endl;
}