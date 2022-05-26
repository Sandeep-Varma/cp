#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T;
	cin>>T;
	while(T--){
		int n, x, max1=0; cin>>n;
		while(n--){ cin>>x; if (x>max1) max1=x;}
		int m, max2=0; cin>>m;
		while(m--){ cin>>x; if (x>max2) max2=x;}
		if (max1>max2) cout<<"Alice"<<endl<<"Alice"<<endl;
		else if (max2>max1) cout<<"Bob"<<endl<<"Bob"<<endl;
		else cout<<"Alice"<<endl<<"Bob"<<endl;
	}
}