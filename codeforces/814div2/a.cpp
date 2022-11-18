#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T;
	cin>>T;
	int n,m;
	while(T--){
		cin>>n>>m;
		if (n%2 == m%2) cout<<"Tonya"<<endl;
		else cout<<"Burenka"<<endl;
	}
}