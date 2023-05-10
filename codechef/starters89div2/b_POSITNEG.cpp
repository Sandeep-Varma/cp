#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int T; cin>>T;
	while(T--){
		int n; cin>>n;
		int x;
		long sum = 0;
		for (int i=1; i<=n; i++){
			cin>>x;
			sum+= x*i;
		}
		cout<<abs(sum)<<endl;
	}
}