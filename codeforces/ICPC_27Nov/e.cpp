#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int T; cin>>T;
	while(T--){
		int n,a,b;
		cin>>n>>a>>b;
		if (a<=b) cout<<int(ceil(float(n)/a))<<endl;
		else cout<<1<<endl;
	}
}