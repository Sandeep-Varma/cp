#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int T; cin>>T;
	while(T--){
		int n; cin>>n;
		vector<int> v(n);
		for (int i=0; i<n; i++) cin>>v[i];
		sort(v.begin(),v.end());
		multiset<int> s1(v.begin(),v.begin()+(n+1)/2);
		multiset<int> s2(v.rbegin(),v.rbegin()+n/2);
		v.clear();
		v.push_back(*s1.rbegin());
		s1.erase(--s1.end());
		multiset<int>::iterator it;
		bool impossible = 0;
		while (!s1.empty() || !s2.empty()){
			if (s1.size() > s2.size()){
				it = s1.lower_bound(*v.rbegin());
				if (it == s1.begin()){
					impossible = 1;
					break;
				}
				v.push_back(*(--it));
				s1.erase(it);
			}
			else{
				it = s2.upper_bound(*v.rbegin());
				if (it == s2.end()){
					impossible = 1;
					break;
				}
				v.push_back(*it);
				s2.erase(it);
			}
		}
		if (impossible) cout<<-1;
		else for (auto x:v) cout<<x<<" ";
		cout<<endl;
	}
}