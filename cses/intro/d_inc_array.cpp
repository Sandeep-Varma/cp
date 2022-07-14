#include <iostream>
using namespace std;

int main(){
	int n; cin>>n;
	int x,y;
	long long moves=0;
	cin>>x;
	n--;
	while(n--){
		cin>>y;
		if (y<x) moves += x-y;
		else x = y;
	}
	cout<<moves<<endl;
}
