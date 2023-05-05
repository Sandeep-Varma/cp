#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int T; cin>>T;
	while(T--){
		string s1,s2;
		cin>>s1>>s2;
		int x1 = count(s1.begin(),s1.end(),'0');
		int x2 = count(s2.begin(),s2.end(),'0');
		int x = min(x1,(int)s1.size()-x2)+min((int)s1.size()-x1,x2);
		for (int i=0; i<x; i++) cout<<1;
		for (int i=0; i<s1.size()-x; i++) cout<<0;
		cout<<endl;
	}
}