#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T;
	cin>>T;
	while(T--){
		int a,b; cin>>a>>b;
		if ((a+b)%3) cout<<"NO"<<endl;
		else{
			if (a<=2*b && b<=2*a) cout<<"YES"<<endl;
			else cout<<"NO"<<endl;
		}
	}
}