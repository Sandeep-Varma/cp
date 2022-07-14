#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T;
	cin>>T;
	while(T--){
		int n; cin>>n;
		char x,y;
		cin>>x;
		int l=0, op = 0, nseg = 1;
		for (int i=1; i<n; i++){
			cin>>y;
			l++;
			if (x!=y) {
				nseg++;
				if (l%2==0) l=0;
				else{
					op++;
					l=1;
				}
				x=y;
			}
		}
		cout<<op<<" "<<nseg<<endl;
	}
}