#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T;
	cin>>T;
	while(T--){
		int n;
		cin>>n;
		int x,y = 0;
		while(n--){
			cin>>x;
			if (x>y) y=x;
		}
		cout.precision(10);
		cout<<pow(2,(int)log2(y)+1)-1<<endl;
	}
}
