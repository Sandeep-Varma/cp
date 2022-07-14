#include<iostream>
using namespace std;

int main(){
	int n; cin>>n;
	bool a[n] = {};
	int x;
	for(int i=1; i<n; i++){
		cin>>x;
		a[x-1] = true;
	}
	int i=0;
	while(a[i]){i++;}
	cout<<i+1<<endl;
}
