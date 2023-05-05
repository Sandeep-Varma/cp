#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T;
	cin>>T;
	while(T--){
		int n; cin>>n;
		int x; cin>>x;
		int y,i;
		bool no = 0;
		for (i=1; i<n; i++){
			cin>>y;
			if (y%x) no = 1;
		}
		if (!no) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}