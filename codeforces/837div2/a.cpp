#include <bits/stdc++.h>
using namespace std;
#define l long long

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int T; cin>>T;
	while(T--){
		int n; cin>>n;
		vector<int> v(n);
		for (int i=0; i<n; i++) cin>>v[i];
		int m = *min_element(v.begin(),v.end());
		int M = *max_element(v.begin(),v.end());
		if (m == M) cout<<(l)n*(l)(n-1);
		else cout<<2*(l)count(v.begin(),v.end(),m)*(l)count(v.begin(),v.end(),M);
		cout<<endl;
	}
}