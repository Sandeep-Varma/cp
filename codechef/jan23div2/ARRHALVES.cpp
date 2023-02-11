#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int T; cin>>T;
	while(T--){
		int n; cin>>n;
		vector<bool> a(2*n);
		int x;
		for (int i=2*n-1; i>=0; i--){
			cin>>x;
			a[i] = (x>n);
		}
		int ans = 0;
		x = 0;
		int l = -1;
		for(auto y:a){
			l++;
			if (y){
				ans += l-x;
				x++;
			}
		}
		cout<<ans<<endl;
	}
}