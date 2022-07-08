#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T;
	cin>>T;
	int a,b,c,d;
	while(T--){
		cin>>a>>b>>c>>d;
		if (a!=c && b!=d) cout<<1<<endl;
		else cout<<2<<endl;
	}
}