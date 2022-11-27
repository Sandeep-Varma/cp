#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int T; cin>>T;
	while(T--){
		int n; cin>>n;
		if (n%2) cout<<4*n<<" ";
		for (int i=0; i<n/2; i++) cout<<3*n+i<<" "<<5*n-i<<" ";
		cout<<endl;
	}
}