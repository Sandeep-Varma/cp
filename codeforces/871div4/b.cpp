#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int T; cin>>T;
	while(T--){
		int n; cin>>n;
		int l = 0;
		int tl = 0;
		int x;
		while(n--){
			cin>>x;
			if (x == 1){
				l = max(tl,l);
				tl = 0;
			}
			else tl++;
		}
		l = max(l,tl);
		cout<<l<<endl;
	}
}