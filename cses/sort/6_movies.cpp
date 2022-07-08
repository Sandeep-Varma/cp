#include <iostream>
#include <map>
using namespace std;

int main(){
	int n; cin>>n;
	map<int,int> M;
	int x,y;
	for (int i=0; i<n; i++){
		cin>>x>>y;
		M[y] = x;
	}
	auto i = M.begin();
	int time = i->first;
	int count = 1;
	while(++i!=M.end()){
		if (time <= i->second){
			count++;
			time = i->first;
		}
	}
	cout<<count<<endl;
}