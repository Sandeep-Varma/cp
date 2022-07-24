#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int x,n; cin>>x>>n;
	set<int> pos = {0,x};
	multiset<int> lens = {x};
	int y, max = x;
	set<int>::iterator z;
	while(n--){
		cin>>y;
		z = pos.lower_bound(y);
		lens.erase(lens.lower_bound(*z - *prev(z)));
		lens.insert(*z-y);
		lens.insert(y-*prev(z));
		pos.insert(y);
		cout<<*(lens.rbegin())<<endl;
	}
}