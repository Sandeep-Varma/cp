#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int T; cin>>T;
	while(T--){
		int n; cin>>n;
		vector<int> a(n);
		for (int i=0; i<n; i++) cin>>a[i];
		if (n == 2) cout<<max(a[0]+a[1],2*abs(a[1]-a[0]))<<endl;
		else if (n == 3){
			if (a[0] >= a[1] || a[2] >= a[1]) cout<<3*max(a[0],a[2])<<endl;
			else cout<<max(a[0]+a[1]+a[2],max(3*max(a[0],a[2]),3*(a[1]-min(a[0],a[2]))))<<endl;
		}
		else cout<<*max_element(a.begin(),a.end())*n<<endl;
	}
}