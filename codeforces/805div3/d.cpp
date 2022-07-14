#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T;
	cin>>T;
	while(T--){
		string s; cin>>s;
		int cp = 0,p; cin>>p;
		bool A[s.size()] = {0};
		vector<vector<int>> a(26);
		for (int i=0; i<s.size(); i++){ a[int(s[i])-97].push_back(i); cp+=int(s[i])-96;}
		int l = 25;
		while(cp>p && l>=0){
			// cout<<cp<<" "<<p<<" "<<l<<" "<<a[l].size()<<endl;
			if (a[l].size()){
				cp-=(l+1);
				A[a[l][a[l].size()-1]] = 1;
				a[l].pop_back();
			}
			else l--;
		}
		for (int i=0; i<s.size(); i++) if (!(A[i])) cout<<s[i];
		cout<<endl;
	}
}