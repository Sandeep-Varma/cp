#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int T; cin>>T;
	vector<pair<long long,int>> v(T);
	for (int i=0; i<T; i++){
		cin>>v[i].first;
		v[i].second = i;
	}
	sort(v.begin(),v.end());
	vector<long long> Ans(T);
	long long ans = 0;
	long long a = 1, b = 2;
	for (int i=0; i<T; i++){
		while(b<=v[i].first){
			if (b%2 == 0) ans+=b;
			b = b+a;
			a = b-a;
		}
		Ans[v[i].second] = ans;
	}
	for (auto x:Ans) cout<<x<<"\n";
}