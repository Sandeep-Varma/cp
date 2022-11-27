#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int T; cin>>T;
	while(T--){
		int n; cin>>n;
		if (n%2){
			while(n--) cout<<1<<" ";
			cout<<endl;
		}
		else{
			cout<<1<<" ";
			for (int i=1; i<n; i++) cout<<n+1<<" ";
			cout<<endl;
		}
	}
}