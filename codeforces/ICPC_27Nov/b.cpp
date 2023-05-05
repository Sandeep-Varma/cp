#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int T; cin>>T;
	while(T--){
		int x; cin>>x;
		string s; cin>>s;
		int i;
		if (s.size()%3 == 2){\
			cout<<"NO"<<endl;
			continue;
		}
		for (i=0; i<s.size()/3; i++){
			if (s[3*i+1]-s[3*i+2]) break;
		}
		if (i == s.size()/3) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}