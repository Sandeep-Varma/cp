#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int T; cin>>T;
	while(T--){
		int n; cin>>n;
		int a = 2000000, b = 2000000, ab = 2000000;
		int x,y;
		while(n--){
			cin>>x>>y;
			if (y == 1) b = min(b,x);
			if (y == 10) a = min(a,x);
			if (y == 11) ab = min(ab,x);
		}
		x = min(a+b,ab);
		cout<<(x >= 2000000?-1:x)<<endl;
	}
}