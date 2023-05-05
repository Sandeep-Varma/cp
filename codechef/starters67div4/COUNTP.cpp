#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int T; cin>>T;
	while(T--){
		int n; cin>>n;
		int x;
		bool a = 0;
		bool b = 0;
		while(n--){
			cin>>x;
			if (!a && x%2) a = 1;
			b = (b != x%2);
		}
		if (a && !b) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}