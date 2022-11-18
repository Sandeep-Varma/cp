#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T;
	cin>>T;
	while(T--){
		int n,m,k;
		cin>>n>>m>>k;
		vector<int> p(k);
		for (int i=0; i<k; i++) cin>>p[i];
		int a = 0;
		if (m%2){
			bool b = 0;
			for (auto x:p){
				if (x >= 2*n) a+=x/n;
				if (x >= 3*n) b = 1;
			}
			if (a>=m && b){
				cout<<"yes"<<endl;
				continue;
			}
		}
		else{
			for (auto x:p) if (x >= 2*n) a+=x/n;
			if (a>=m){
				cout<<"yes"<<endl;
				continue;
			}
		}
		a = 0;
		if (n%2){
			bool b = 0;
			for (auto x:p){
				if (x >= 2*m) a+=x/m;
				if (x >= 3*m) b = 1;
			}
			if (a>=n && b) cout<<"yes"<<endl;
			else cout<<"no"<<endl;
		}
		else{
			for (auto x:p) if (x >= 2*m) a+=x/m;
			if (a>=n) cout<<"yes"<<endl;
			else cout<<"no"<<endl;
		}
	}
}