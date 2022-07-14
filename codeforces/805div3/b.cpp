#include <bits/stdc++.h>
using namespace std;

int minDays(string s){
	set<char> S;
	int pos = 0;
	while(S.size()<3 && pos<s.size()){
		S.insert(s[pos]);
		pos++;
	}
	while (S.count(s[pos])){
		pos++;
	}
	if (pos == s.size()) return 1;
	return 1 + minDays(s.substr(pos,s.size()-pos));
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T;
	cin>>T;
	while(T--){
		string s; cin>>s;
		cout<<minDays(s)<<endl;
	}
}