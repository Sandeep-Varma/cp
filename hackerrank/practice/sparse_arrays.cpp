#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n; cin>>n;
	vector<string> v(n);
	while(n--) cin>>v[n];
	sort(v.begin(),v.end());
	cin>>n;
	string s;
	while(n--){
		cin>>s;
		cout<<distance(lower_bound(v.begin(),v.end(),s),upper_bound(v.begin(),v.end(),s))<<endl;
	}
}