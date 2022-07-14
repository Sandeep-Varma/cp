#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T;
	cin>>T;
	while(T--){
		int n; cin>>n;
		int a[n];
		for(int i=0; i<n; i++){ cin>>a[i];}
		int m; cin>>m;
		int x;
		long long sum = 0;
		while(m--){ cin>>x; sum+=x;}
		cout<<a[sum%n]<<endl;
	}
}