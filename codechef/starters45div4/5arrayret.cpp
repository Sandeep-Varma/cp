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
		vector<int> v;
		int x, sum = 0;
		for (int i=0; i<n; i++){ cin>>x; sum+=x; v.push_back(x);}
		sum = sum/(n+1);
		for (auto i=v.begin(); i!=v.end(); i++){ *i = *i-sum;}
		for (auto x:v){ cout<<x<<" ";}
		cout<<endl;
	}
}