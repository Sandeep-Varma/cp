#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int T; cin>>T;
	while(T--){
		int n; cin>>n;
		vector<bool> p(n,0);
		vector<bool> q(n,0);
		vector<pair<int,int>> a(n);
		vector<pair<int,int>> pa;
		vector<pair<int,int>> qa;
		for (int i=0; i<n; i++){
			a[i].second = i;
			cin>>a[i].first;
		}
		sort(a.begin(),a.end());
		int pe = 0, qe = 0;
		bool flag = 0;
		for (auto x:a){
			if (x.first > n){
				flag = 1;
				break;
			}
			if ((x.first < pe+1 || p[x.first-1]==0) && x.first < qe+1){
				flag = 1;
				break;
			}
			if ( && q[x.first-1]==0){
				flag = 1;
				break;
			}
			if (p[x.first]==0){

			}
			if (pe <= qe){
				p[pe] = 1;
				q[]
			}
		}
		if (flag) cout<<"NO"<<endl;

	}
}