#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int T; cin>>T;
	while(T--){
		int n; cin>>n;
		vector<int> v(n+1);
		int x;
		for (int i=0; i<n; i++){
			cin>>x; v[n-x]++;
		}
		for (int i=n-1; i>=0; i--) v[i]+=v[i+1];
		int i;
		for (i=n; i>=0; i--){
			if (v[i] == i){
				cout<<n-i<<endl;
				break;
			}
		}
		if (i == -1) cout<<-1<<endl;
	}
}