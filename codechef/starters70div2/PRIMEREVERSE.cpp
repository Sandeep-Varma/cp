#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int T; cin>>T;
	while(T--){
		int n; cin>>n;
		int n1 = 0;
		int n2 = 0;
		char x;
		for (int i=0; i<n; i++){
			cin>>x;
			n1+=(x=='1');
		}
		for (int i=0; i<n; i++){
			cin>>x;
			n2+=(x=='1');
		}
		if (n1 == n2) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}