#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T;
	cin>>T;
	while(T--){
		int n; cin>>n;
		vector<int> v;
		long long int ans = 0;
		int x=0,i=0;
		while(x==0 && i<n){
			i++;
			cin>>x;
		}
		for (i; i<n; i++){
			ans+=((x)?x:1);
			cin>>x;
		}
		cout<<ans<<endl;
	}
}