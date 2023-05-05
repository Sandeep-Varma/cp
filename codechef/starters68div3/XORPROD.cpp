#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int T; cin>>T;
	while(T--){
		int n; cin>>n;
		vector<int> v;
		long long ans = 1;
		int x = 0;
		int y;
		while(n--){
			cin>>y;
			if (y == 1) x++;
			else if (y%2) ans = (ans*y)%998244353;
			else v.push_back(y);
		}
		sort(v.rbegin(),v.rend());
		while(x--){
			if (v.empty()) break;
			ans = (ans*(*v.rbegin()+1))%998244353;
			v.pop_back();
		}
		for(auto i:v) ans = (ans*i)%998244353;
		cout<<ans<<endl;
	}
}