#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T;
	cin>>T;
	while(T--){
		int n,o,q; cin>>n>>o>>q;
		char c[n+1];
		vector<int> v1,v2;
		int len = 0;
		for (int i=1; i<n+1; i++) cin>>c[i];
		v1.push_back(len+1);
		v2.push_back(0);
		len+=n;
		int l,r;
		while (o--){
			cin>>l>>r;
			v1.push_back(len+1);
			v2.push_back(l);
			len+=r-l+1;
		}
		vector<int>::iterator i,j;
		int x;
		while (q--){
			cin>>x;
			i = upper_bound(v1.begin(),v1.end(),x)-1;
			j = v2.begin()+distance(v1.begin(),i);
			cout<<c[*j+*i-x];
		}
	}
}