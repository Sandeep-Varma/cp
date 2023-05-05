#include <bits/stdc++.h>
using namespace std;
#define ll long long unsigned

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int T; cin>>T;
	while(T--){
		int n; cin>>n;
		vector<vector<ll>> a(n,vector<ll>(n));
		ll ans = 0;
		for (int i=0; i<n; i++){
			cin>>a[i][i];
			ans = (ans + ((((ll)pow(a[i][i],2))%998244353)*a[i][i])%998244353)%998244353;
		}
		for (int l = 2; l<=n; l++){
			for (int i=0; i<n-l+1; i++){
				a[i][i+l-1] = (a[i][i+l-2] + a[i+l-1][i+l-1])%998244353;
				ans = (ans + ((((ll)pow(a[i][i+l-1],2))%998244353)*a[i][i+l-1])%998244353)%998244353;
			}
		}
		cout<<ans<<endl;
	}
}