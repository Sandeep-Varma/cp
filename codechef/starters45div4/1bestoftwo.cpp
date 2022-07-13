#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T;
	cin>>T;
	int x,y;
	while(T--){
		cin>>x>>y;
		cout<<max(x,y)<<endl;
	}
}