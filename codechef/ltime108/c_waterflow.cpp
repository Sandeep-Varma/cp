#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T;
	cin>>T;
	while(T--){
		int W,X,Y,Z;
		cin>>W>>X>>Y>>Z;
		if (W+Y*Z<X) cout<<"unfilled"<<endl;
		else if (W+Y*Z==X) cout<<"filled"<<endl;
		else cout<<"overflow"<<endl;
	}
}