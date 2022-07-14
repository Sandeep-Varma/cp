#include <bits/stdc++.h>
using namespace std;
#define int unsigned long long

int32_t main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int q,x; cin>>q;
	while(q--){
		cin>>x;
		int d=0;
		while(++d){
			if (x<=9*(int)pow(10,d-1)*d){
				cout<<((((int)pow(10,d-1)-1+(x+d-1)/d)/(int)pow(10,d-1-(x+d-1)%d))%10)<<endl;
				break;
			}
			x = x - 9*(int)pow(10,d-1)*d;
		}
	}
}