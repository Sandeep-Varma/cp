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
		int x, max = 0;
		while(n--){
			cin>>x;
			vector<int>::iterator y = lower_bound(v.begin(),v.end(),x);
			max+=distance(y,v.end());
			v.insert(y,x);
		}
		cout<<max<<endl;
	}
}