#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T;
	cin>>T;
	while(T--){
		long long a,b; cin>>a>>b;
        if (a<b) swap(a,b);
        if ((2*b-a)%3 || 2*b-a<0) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
	}
}