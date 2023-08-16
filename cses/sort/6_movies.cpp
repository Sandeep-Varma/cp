#include <bits/stdc++.h>
using namespace std;

int main(){
	int n; cin>>n;
	set<pair<int,int>> s;
	int x,y;
	for (int i=0; i<n; i++){
		cin>>x>>y;
		s.insert({y,-x});
	}
	int ans = 0;
	int time = 0;
	for (auto m: s){
		if (m.second*-1 >= time){
			ans++;
			time = m.first;
		}
	}
	cout<<ans<<endl;
}