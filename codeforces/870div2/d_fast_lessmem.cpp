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
		int m = INT_MIN;
		int M = INT_MIN;
		for (int i=0; i<n; i++) for (int j=i+2; j<n; j++){
			if (j-i == 2) m = b[i+1];
			else m = max(m,b[j-1]);
			M = max(M,b[i]+b[j]+m-(j-i));
		}
		cout<<M<<endl;
	}
}