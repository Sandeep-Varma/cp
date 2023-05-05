#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int T;
	cin>>T;
	while(T--){
		int n; cin>>n;
		vector<int> v;
		while(n--){
			int x; cin>>x;
			v.push_back(x);
		}
		long long m1 = 0,m2 = 0,M1 = 0,M2 = 0;
		for (auto x:v){
			if (m1){
				if (m1 > x){
					m2 = m1;
					m1 = x;
				}
				else if ((!m2 || m2 > x) && x > m1) m2 = x;
			}
			else{
				m1 = x;
			}
			if (M1){
				if (M1 < x){
					M2 = M1;
					M1 = x;
				}
				else if (M2 < x && x < M1) M2 = x;
			}
			else{
				M1 = x;
			}
		}
		cout<<((m2)?max(M1-M2+M1-m1,m2-m1+M1-m1):0)<<endl;
	}
}