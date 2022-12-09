#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int T; cin>>T;
	while(T--){
		int N,X,C; cin>>N>>X>>C;
		int a;
		int ans = 0;
		while(N--){
			cin>>a;
			ans+=max(a,X-C);
		}
		cout<<ans<<endl;
	}
}