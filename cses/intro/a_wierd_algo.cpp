#include <bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main(){
	int n; cin>>n;
	while(n>1){
		cout<<n<<" ";
		if (n%2) n = 3*n+1;
		else n = n/2;
	}
	cout<<1<<endl;
}
