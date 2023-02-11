#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int T; cin>>T;
	while(T--){
		int n; cin>>n;
		vector<int> b(n);
		for (int i=0; i<n; i++) cin>>b[i];
		unordered_map <int, pair<int,int>> m;
		int p = 1;
		vector<int> a(n);
		for (int i=0; i<n; i++){
			if (m.count(b[i])){
				a[i] = m[b[i]].first;
				if (m[b[i]].second == b[i]-1) m.erase(b[i]);
				else m[b[i]].second++;
			}
			else{
				a[i] = p;
				if (b[i] > 1) m[b[i]] = {p,1};
				p++;
			}
		}
		if (m.size() == 0){
			for (auto x:a) cout<<x<<" ";
			cout<<endl;
		}
		else cout<<-1<<endl;
	}
}