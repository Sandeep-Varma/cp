#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T;
	cin>>T;
	while(T--){
		int n,q; cin>>n>>q;
		map<int,int> m1,m2;
		int x;
		for(int i=1; i<=n; i++){
			cin>>x;
			if (m1[x] == 0) m1[x]=i;
			else if (m2[x] == 0) m2[x] = i;
			else m2[x] = i;
		}
		int x1,x2;
		while(q--){
			cin>>x1>>x2;
			if (m1[x1]>0 && m1[x2]>0 && m1[x1] < max(m1[x2],m2[x2])) cout<<"YES"<<endl;
			else cout<<"NO"<<endl;
		}
	}
}