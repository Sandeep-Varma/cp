#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int T; cin>>T;
	while(T--){
		int n; cin>>n;
		vector<int> b(n);
		for (int i=0; i<n; i++) cin>>b[i];
		vector<vector<int>> m(n,vector<int>(n));
		for (int i=0; i<n; i++) m[i][i] = b[i];
		for (int i=0; i<n; i++) for (int j=i+1; j<n; j++) m[i][j] = max(b[j],m[i][j-1]);
		int M = INT_MIN;
		for (int i=0; i<n; i++) for (int j=i+2; j<n; j++) M = max(M,b[i]+b[j]+m[i+1][j-1]-(j-i));
		cout<<M<<endl;
	}
}