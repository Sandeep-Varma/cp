#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T,n,k,x;
	cin>>T;
	while(T--){
		cin>>n>>k;
		if (k%4){
			cout<<"YES"<<endl;
			for (int i=2; i<=n; i+=2){
				if (i%4){
					if (k%2) cout<<i-1<<" "<<i<<endl;
					else cout<<i<<" "<<i-1<<endl;
				}
				else cout<<i-1<<" "<<i<<endl;
			}
		}
		else cout<<"NO"<<endl;
	}
}