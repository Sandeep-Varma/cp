#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int T; cin>>T;
	while(T--){
		int n,k;
		cin>>n>>k;
		if (k == 0){
			for (int i=1; i<=n; i++) cout<<i<<" ";
			cout<<endl;
		}
		else if (n%(2*k)) cout<<-1<<endl;
		else{
			for (int i=0; i<n/(2*k); i++){
				for (int j=1; j<=k; j++) cout<<(2*k)*i+j+k<<" ";
				for (int j=1; j<=k; j++) cout<<(2*k)*i+j<<" ";
			}
			cout<<endl;
		}
	}
}