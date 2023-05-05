#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int T; cin>>T;
	while(T--){
		int n,m,k; cin>>n>>m>>k;
		vector<int> v(k);
		vector<bool> b(k,0);
		while(k--) cin>>v[k];
		int i=v.size();
		int a = n*m-3;
		while(i--){
			while (!b[i]){
				b[*(--v.end())-1]=1;
				v.pop_back();
				a--;
			}
			a++;
			if (a <= 0 && i) break;
		}
		if (a<=0) cout<<"TIDAK"<<endl;
		else cout<<"YA"<<endl;
	}
}