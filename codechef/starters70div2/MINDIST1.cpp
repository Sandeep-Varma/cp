#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int T; cin>>T;
	while(T--){
		int n; cin>>n;
		char x;
		bool flag = 1;
		int prev;
		int l = 2;
		for (int i=0; i<n; i++){
			cin>>x;
			if (x == '0') continue;
			if (flag){
				// cout<<i<<endl;
				prev = i;
				flag = 0;
			}
			else{
				// cout<<i<<endl;
				l = min(l,2-(i-prev)%2);
				prev = i;
			}
		}
		cout<<l<<endl;
	}
}