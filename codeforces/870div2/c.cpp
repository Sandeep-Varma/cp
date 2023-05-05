#include <bits/stdc++.h>
using namespace std;

int smallestfactor(int n){
	for (int i=2; i<=sqrt(n); i++){
		if (n%i == 0) return i;
	}
	return n;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int T; cin>>T;
	while(T--){
		int n,m; cin>>n>>m;
		if (n>1){
			if (m>2){
				if (smallestfactor(n) > m) cout<<"YES"<<endl;
				else cout<<"NO"<<endl;
			}
			else if (m == 2) cout<<(n%2?"YES":"NO")<<endl;
			else cout<<"YES"<<endl;
		}
		else cout<<"YES"<<endl;
	}
}