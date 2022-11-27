#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int T; cin>>T;
	while(T--){
		int n,x; cin>>n>>x;
		if (n == x){
			cout<<n<<" ";
			for (int i=2; i<n; i++) cout<<i<<" ";
			cout<<1<<endl;
		}
		else if (n%x) cout<<-1<<endl;
		else{
			cout<<x<<" ";
			for (int i=2; i<x; i++) cout<<i<<" ";
			cout<<n<<" ";
			for (int i=x+1; i<n; i++) cout<<i<<" ";
			cout<<1<<endl;
		}
	}
}