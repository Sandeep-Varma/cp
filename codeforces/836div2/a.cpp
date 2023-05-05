#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int T; cin>>T;
	string s;
	while(T--){
		cin>>s;
		cout<<s;
		reverse(s.begin(),s.end());
		cout<<s;
		cout<<endl;
	}
}