#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T;
	cin>>T;
	int s,x,y,z;
	while(T--){
		cin>>s>>x>>y>>z;
		if (s >= x+y+z) cout<<0<<endl;
		else if (s >= min(x,y)+z) cout<<1<<endl;
		else cout<<2<<endl;
	}
}