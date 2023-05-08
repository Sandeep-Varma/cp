#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int T; cin>>T;
	while(T--){
		string s; cin>>s;
		if (s == string(s.size(),s[0])) cout<<-1<<endl;
		else cout<<s.size()-1<<endl;
	}
}