#include <bits/stdc++.h>
using namespace std;

int digits(int n){
	int d = 1;
	while(n/pow(10,d) > 1) d++;
	return d;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int T; cin>>T;
	while(T--){
		int n; cin>>n;
		int d = digits(n);
		cout<<9*(d-1) + n/(int)pow(10,d-1)<<endl;
	}
}