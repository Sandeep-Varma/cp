#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T;
	cin>>T;
	while(T--){
		int n; cin>>n;
		set<int> a;
		int x;
		bool zero = 0, rep = 0;
		int non_zero = 0;
		for (int i=0; i<n; i++){
			cin>>x;
			if (x==0) zero=1;
			else non_zero++;
			if (a.count(x)==1) rep=1;
			a.insert(x);
		}
		if (zero) cout<<non_zero<<endl;
		else if (rep) cout<<n<<endl;
		else cout<<n+1<<endl;
	}
}