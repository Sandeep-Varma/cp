#include <bits/stdc++.h>
using namespace std;
 
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T;
	cin>>T;
	while(T--){
		int n; cin>>n;
		multiset<int> s;
		int x, max = 0;
		while(n--){
			cin>>x;
			max+=distance(s.lower_bound(x),s.end());
			s.insert(x);
		}
		cout<<max<<endl;
	}
}