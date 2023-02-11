#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int T; cin>>T;
	while(T--){
		int n; cin>>n;
		vector<int> v(n);
		for (int i=0; i<n; i++){
			cin>>v[i];
		}
		sort(v.begin(),v.end());
		if (v[0] < v[n-1]){
			cout<<"YES"<<endl;
			if (v[n-2] == v[n-1]) swap(v[n-2],v[0]);
			for (int i=n-1; i>=0; i--) cout<<v[i]<<" ";
			cout<<endl;
		}
		else cout<<"NO"<<endl;
	}
}