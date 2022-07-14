#include <bits/stdc++.h>
using namespace std;

int nearest10power(int n){
	int k = 0;
	while(n >= 10){
		n=n/10;
		k++;
	}
	return (int)pow(10,k);
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T;
	cin>>T;
	while(T--){
		int n; cin>>n;
		cout<<n-nearest10power(n)<<endl;
	}
}