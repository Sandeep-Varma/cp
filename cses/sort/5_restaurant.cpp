#include <iostream>
#include <map>
#include <set>
#include <algorithm>
using namespace std;

int main(){
	int n; cin>>n;
	map<int,int> C;
	int x,y;
	for (int i=0; i<n; i++){ cin>>x>>y; C[x] = y;}
	int c = 0, cmax = 0;
	set<int> cc; // current customers leaving times
	int time;
	for(auto i:C){
		time = i.first;
		cc.insert(i.second); c++;
		while(*cc.begin()<time){ cc.erase(cc.begin()); c--;}
		if (c>cmax) cmax = c;
	}
	cout<<cmax<<endl;
}