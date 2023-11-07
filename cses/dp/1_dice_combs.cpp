#include <bits/stdc++.h>
using namespace std;

int main(){
	int n; cin>>n;
	int a[n+1];
	a[0] = 1;
	for (int i=1; i<=n; i++){
		a[i] = 0;
		for (int j=1; j<=6; j++) if (i-j>=0) a[i] = (a[i]%1000000007 + a[i-j]%1000000007)%1000000007;
	}
	cout<<a[n]<<endl;
	return 0;
}