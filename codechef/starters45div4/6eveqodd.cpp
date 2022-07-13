#include <bits/stdc++.h>
using namespace std;

int pow2(int x){
	if (x%2) return 0;
	else return 1+pow2(x/2);
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T;
	cin>>T;
	while(T--){
		int n; cin>>n;
		vector<int> v;
		int x;
		for (int i=0; i<2*n; i++){ cin>>x; v.push_back(pow2(x));}
		sort(v.begin(),v.end());
		if (v[n]){
			if (v[n-1]){
				int op = 0;
				for (int i=n-1; i>=0; i--){
					if (v[i]) op+=v[i];
					else break;
				}
				cout<<op<<endl;
			}
			else cout<<0<<endl;
		}
		else{
			int op = 0;
			for (int i=n; i<2*n; i++){
				if (v[i]) break;
				else op++;
			}
			cout<<op<<endl;
		}
	}
}