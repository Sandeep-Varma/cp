#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int T; cin>>T;
	int a,b,c;
	while(T--){
		cin>>a>>c;
		b = (a+c)/2;
		if (2*b == a+c) cout<<b<<endl;
		else cout<<-1<<endl;
	}
}
