#include <iostream>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T;
	cin>>T;
	while(T--){
		int l1,r1,l2,r2;
		cin>>l1>>r1>>l2>>r2;
		if (l1<=r2 && l2<=r1){
			if (l2>l1) cout<<l2<<endl;
			else cout<<l1<<endl;
		}
		else cout<<l1+l2<<endl;
	}
}