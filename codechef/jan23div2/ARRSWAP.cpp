#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int T; cin>>T;
	while(T--){
		int n; cin>>n;
		vector<int> a(2*n);
		for (int i=0; i<2*n; i++) cin>>a[i];
		sort(a.begin(),a.end());
		int ans = INT_MAX;
		for (int i=0; i<n+1; i++) ans = min(ans,a[i+n-1]-a[i]);
		cout<<ans<<endl;
	}
}