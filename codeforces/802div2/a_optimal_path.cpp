#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T;
	cin>>T;
	while(T--){
		int n,m;
		cin>>n>>m;
		cout<<(m*(m-1))/2+m*(n*(n+1))/2<<endl;
	}
}