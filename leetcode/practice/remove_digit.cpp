#include <bits/stdc++.h>
using namespace std;

string removeDigit(string s, char c) {
    int i = -1;
    for (int j=0; j<s.size(); j++){
        // cout<<"Hello "<<s.size()<<endl;
		// break;
		if (s[j] == c){
            i = j;
            if (i == s.size()-1) break;
            if (s[i+1]-s[i]>0) break;
        }
    }
    return ((i)?s.substr(0,i):"")+((s.size()-i-1)?s.substr(i+1,s.size()-i-1):"");
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int T; cin>>T;
	while(T--){
		string s; cin>>s;
		char c; cin>>c;
		cout<<removeDigit(s,c)<<endl;
	}
}