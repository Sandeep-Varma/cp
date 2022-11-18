#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T;
	cin>>T;
	while(T--){
		int n; cin>>n;
		if (n == 1) cout<<1<<endl;
		else if (n%2){
			cout<<1<<" ";
			for (int i=1; i<=n/2; i++) cout<<(2*i+1)<<" "<<(2*i)<<" ";
			cout<<endl;
		}
		else{
			for (int i=1; i<=n/2; i++) cout<<(2*i)<<" "<<(2*i-1)<<" ";
			cout<<endl;
		}
	}
}