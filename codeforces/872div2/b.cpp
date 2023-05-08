#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int T; cin>>T;
	while(T--){
		int n,m; cin>>n>>m;
		vector<int> b(n*m);
		for(int i=0; i<n*m; i++) cin>>b[i];
		sort(b.begin(),b.end());
		if (m>n) swap(n,m);
		cout<<(n-1)*m*(b[n*m-1]-b[0]) + (m-1)*max(b[n*m-2]-b[0],b[n*m-1]-b[1])<<endl;
	}
}