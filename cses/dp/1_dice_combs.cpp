#include <bits/stdc++.h>
using namespace std;

int main(){
	int n; cin>>n;
	long long int a[n+1][n+1];
	a[1][1] = 1;
	for (int j=2; j<n; j++) a[1][j] = 0;
	for (int i=2; i<=n; i++){
		if (i<7) a[i][1] = 1;
		else a[i][1] = 0;
		for (int j=2; j<=i; j++){
			a[i][j] = 0;
			for (int k=1; k<=6; k++){
				if (i-k>0 && j-1<=i-k) a[i][j]+=a[i-k][j-1];
			}
		}
		// for (int j=i+1; j<=n; j++) a[i][j] = 0;
	}
	long long int ans = 0;
	for (int j=1; j<=n; j++) ans+=a[n][j];
	cout<<ans%1000000007<<endl;
	return 0;
}