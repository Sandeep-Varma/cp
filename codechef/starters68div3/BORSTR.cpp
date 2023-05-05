#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int T; cin>>T;
	while(T--){
		int n; cin>>n;
		string s; cin>>s;
		s = s + "X";
		unordered_map<int,int> m;
		int L = 0;
		int l = 0;
		char c = 'X';
		for (auto x:s){
			if (x == c) l++;
			else{
				L = max(L,l-1);
				if (m.count(c)){
					L = max(L,min(m[c],l));
					m[c] = max(m[c],l);
				}
				else m[c] = l;
				c = x;
				l = 1;
			}
		}
		cout<<L<<endl;
	}
}