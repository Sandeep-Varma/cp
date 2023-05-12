#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int T; cin>>T;
	while(T--){
		string s1; cin>>s1;
		string s2 = "codeforces";
		int x = 0;
		for (int i=0; i<10; i++) x+= (s1[i] != s2[i]);
		cout<<x<<endl;
	}
}