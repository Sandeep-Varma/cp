#include <bits/stdc++.h>
using namespace std;
string s;

int minDays(int p){
	set<char> S;
	int pos = p;
	while(S.size()<3 && pos<s.size()){
		S.insert(s[pos]);
		pos++;
	}
	while (S.count(s[pos])){
		pos++;
	}
	if (pos == s.size()) return 1;
	return 1 + minDays(pos);
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T;
	cin>>T;
	while(T--){
		cin>>s;
		cout<<minDays(0)<<endl;
	}
}