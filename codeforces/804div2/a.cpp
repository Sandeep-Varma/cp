#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T;
	cin>>T;
	while(T--){
		int n; cin>>n;
		if (n%2 == 1) cout<<-1<<endl;
		else cout<<n/2<<" "<<(n+1)/2<<" "<<0<<endl;
	}
}