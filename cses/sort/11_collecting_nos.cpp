#include <iostream>
#include <vector>
using namespace std;

int main(){
	int n; cin>>n;
	vector<int> a;
	int x;
	for (int i=0; i<n; i++){ cin>>x; a.push_back(x);}
	int r = 0;
	x = 1;
	// for (int i=0; i<a.size(); i++){ cout<<a[i]<<" ";} cout<<endl;
	while(++r){
		for (int i=0; i<a.size(); i++){ if (a[i] == x){ x++; a.erase(a.begin()+i); i--;}}
		// for (int i=0; i<a.size(); i++){ cout<<a[i]<<" ";} cout<<endl;
		cout<<r<<endl;
		if (x == n+1) break;
	}
	cout<<r<<endl;
}