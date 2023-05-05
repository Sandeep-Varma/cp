#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int T; cin>>T;
	while(T--){
		int n; cin>>n;
		vector<vector<bool>> a(10,vector<bool>(n));
		int x;
		for (int i=0; i<n; i++){
			cin>>x;
			for (int j=0; j<10; j++){
				a[j][i] = x%2;
				x = x>>1;
			}
		}
		int ans=0;
		for (int i=0; i<10; i++){
			ans+=(*max_element(a[i].begin(),a[i].end())-*min_element(a[i].begin(),a[i].end()))<<i;
		}
		cout<<ans<<endl;
	}
}