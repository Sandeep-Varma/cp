#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int n; cin>>n;
	vector<int> s(n);
	for (int i=0; i<n; i++) cin>>s[i];
	int ml = 0, l = 0;
	map<int,int> m;
	for (int i=0; i<n; i++){
		// cout<<i<<" - ";
		// for (auto j:m){ cout<<"("<<j.first<<","<<j.second<<") ";}
		// cout<<l<<" "<<i-m[s[i]]+1<<endl;
		if (i-m[s[i]]<l){
			ml = max(ml,l);
			l = i-m[s[i]]+1;
		}
		else l++;
		m[s[i]] = max(m[s[i]],i+1);
	}
	ml = max(ml,l);
	cout<<ml<<endl;
}