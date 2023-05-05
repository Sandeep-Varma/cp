#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T;
	cin>>T;
	int n,q;
	while(T--){
		cin>>n>>q;
		vector<int> a(n);
		for (int i=0; i<n; i++) cin>>a[i];
		vector<int> w(n);
		w[0]=0;
		int cumw=0;
		for (int i=1; i<n; i++){
			if (a[i]>a[cumw]){
				cumw = i;
				w[i] = i;
			}
			else{
				w[i] = i-1;
				w[cumw] = i;
			}
		}
		int i,k;
		while(q--){
			cin>>i>>k;
			if (k>n-1){
				if (i-1 == cumw) cout<<k-max(0,i-2)<<endl;
				else cout<<w[i-1]-max(0,i-2)<<endl;
			}
			else{
				if (k<i-1) cout<<0<<endl;
				else if (k<w[i-1]) cout<<max(0,k-max(i-2,0))<<endl;
				else cout<<w[i-1]-max(i-2,0)<<endl;
			}
		}
	}
}