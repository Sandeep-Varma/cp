#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int T; cin>>T;
	while(T--){
		int a,b,c;
		cin>>a>>b>>c;
		if (a>b+c) cout<<"Yes"<<endl;
		else if (b>c+a) cout<<"Yes"<<endl;
		else if (c>a+b) cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
	}
}