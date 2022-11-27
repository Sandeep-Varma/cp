#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int T; cin>>T;
	while(T--){
		int n; cin>>n;
		int y=0;
		for (int x=1; x<=(int)(sqrt(n)); x++){
			if (n%(x+1) == 0){
				y=x;
				break;
			}
		}
		if (y==0) cout<<1<<" "<<n-1<<endl;
		else cout<<n/(y+1)<<" "<<(y*n)/(y+1)<<endl;
	}
}