#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, k, size; cin>>n>>k;
	set<int> s;
	for (int i=1; i<=n; i++) s.insert(i);
	auto it = s.begin();
	int t = distance(it,s.end());
	while(s.size()>0){
		int r = k;
		if (r >= t){
			r = (r-t)%s.size();
			it = s.begin();
		}
		advance(it,r);
		cout<<*it<<endl;
		t = distance(it,s.end())-1;
		if (it == s.begin()){
			s.erase(s.begin());
			it = s.begin();
		}
		else{
			it--;
			s.erase(next(it));
			           it++;
		}
	}
	cout<<endl;
}