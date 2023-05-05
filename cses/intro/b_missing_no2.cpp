#include<iostream>
using namespace std;

int main(){
	int n; cin>>n;
	int x;
    long long sum = 0;
	for(int i=1; i<n; i++){
		cin>>x;
        sum+=x;
	}
	cout<<(long(n)*(n+1))/2 - sum<<endl;
}
