#include <bits/stdc++.h>
using namespace std;

void check(string* s,int n){
	if (n == 0) cout<<"YES"<<endl;
	else if (n%2 == 1) check(s,n-1);
	else{
		int i;
		for (i=0; i<n/2; i++) if ((*s)[i] != (*s)[n/2+i]) break;
		if (i == n/2) check(s,n/2);
		else cout<<"NO"<<endl;
	}
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T;
	cin>>T;
	while(T--){
		int n; cin>>n;
		string s; cin>>s;
		check(&s,n);
	}
}