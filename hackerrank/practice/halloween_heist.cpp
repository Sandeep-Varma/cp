#include <bits/stdc++.h>
using namespace std;

string s;
int k;

void check(int i){
	if (s.size()-i<7) return;
	if ((s[i+1]-s[i]+26)%26 != 5) return;
	if ((s[i+1]-s[i+2]+26)%26 != 3) return;
	if ((s[i+2]-s[i+3]+26)%26 != 1) return;
	if (s[i+3] != s[i+4]) return;
	if ((s[i+4]-s[i+5]+26)%26 != 3) return;
	if ((s[i+6]-s[i+5]+26)%26 != 17) return;
	k = min(k,(s[i]-'C'+26)%26);
	return;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	k = 26;
	int n; cin>>n;
	cin>>s;
	for (unsigned int i=0; i<s.size(); i++) check(i);
	cout<<k<<endl;
}