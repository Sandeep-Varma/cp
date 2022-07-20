#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T;
	cin>>T;
	while(T--){
		int n,x; cin>>n>>x;
		vector<int> v(2*n);
		for (int i=0; i<2*n; i++) cin>>v[i];
		sort(v.begin(),v.end());
		int i;
		for (i=0; i<n; i++) if (v[n+i]-v[i]<x) break;
		if (i==n) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}