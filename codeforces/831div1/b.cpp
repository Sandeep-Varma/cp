#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int T;
	cin>>T;
	while(T--){
		int n; cin>>n;
		vector<pair<int,int>> v;
		int ans = 0;
		while (n--){
			int x,y;
			cin>>x>>y;
			v.push_back({max(x,y),min(x,y)});
			ans+=2*min(x,y);
		}
		sort(v.begin(),v.end());
		ans+=v.begin()->first + (--v.end())->first;
		for (int i=1; i<v.size(); i++) ans+=abs(v[i].first-v[i-1].first);
		cout<<ans<<endl;
	}
}