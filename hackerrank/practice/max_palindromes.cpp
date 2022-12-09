#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string s; cin>>s;
	int l,r;
    int q; cin>>q;
    while(q--){
        cin>>>l>>r;
        unordered_map<char,int> m;
		for (int i=l; i<=r; i++) m[s[i]]++;
		int odd = 0;
		vector<int> v;
		int total = 0;
		for (auto x:m){
			odd += x.second%2;
			total += x.second/2;
			if (x.second/2) v.push_back(x.second/2);
		}
		
	}
}