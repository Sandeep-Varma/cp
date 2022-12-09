#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int T; cin>>T;
	while(T--){
		int n,k;
		cin>>n>>k;
		if (k>=n/2) cout<<(n*(n-1))/2<<endl;
		else cout<<(2*n*k)-k*(2*k+1)<<endl;
	}
}