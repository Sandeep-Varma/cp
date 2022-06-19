#include <bits/stdc++.h>
#include <set>
using namespace std;
#define int long long

int32_t main(){
	int n; cin>>n;
	int a[n];
	for (int i=0; i<n; i++){ cin>>a[i];}
	int sum = 0;
	for (int i=0; i<n; i++){ sum+=a[i];}
	bool S[n+1][sum/2+1];
	for (int j=1; j<sum/2+1; j++){ S[0][j] = 0;}
	S[0][0] = 1;
	for (int i = 1; i<n+1; i++){
		S[i][0] = 1;
		for (int j=sum/2; j>0; j--){
			S[i][j] = S[i-1][j] || ((j>=a[i-1])?S[i-1][j-a[i-1]]:0);
		}
	}
	for (int j=sum/2; j>=0; j--){
		if (S[n][j]){
			cout<<sum-2*j<<endl;
			return 0;
		}
	}
}