#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int T; cin>>T;
	while(T--){
		int n,k; cin>>n>>k;
		vector<vector<int>> a(n,vector<int>(2));
		for (int i=0; i<n; i++) cin>>a[i][1];
		for (int i=0; i<n; i++) cin>>a[i][0];
		sort(a.begin(),a.end());
		int t=1;
		int i=0;
		int cum_k = 0;
		bool flag = 0;
		// cout<<"hello"<<endl;
		while(true){
			// cout<<"a"<<endl;
			while((int)a.size() > i && cum_k>=a[i][1]) i++;
			if ((int)a.size() <= i){
				cout<<"YES"<<endl;
				break;
			}
			if (flag) k -= a[i][0];
			a[i][1] -= cum_k;
			// cout<<a[i][0]<<" "<<a[i][1]<<" "<<k<<endl;
			int disc = a[i][0]*(a[i][0]+4*(k-2*a[i][1]))+4*k*k;
			if (disc < 0 || k <= 0){
				cout<<"NO"<<endl;
				break;
			}
			int x = ceil((2*k+a[i][0]-sqrt((long double)disc))/(2*a[i][0]));
			// cout<<x<<endl;
			cum_k += k*x - a[i][0]*((x*(x-1))/2);
			k -= (x-1)*a[i][0];
			flag = 1;
			t += x;
			// cout<<t<<" ";
		}
	}
}