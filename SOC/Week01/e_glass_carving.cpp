#include <bits/stdc++.h>
using namespace std;

int  main()
{
	int w,h,n; cin>>w>>h>>n;
	set<int> w_cuts; w_cuts.insert(w); w_cuts.insert(0);
	multiset<int> w_segs; w_segs.insert(w);
	set<int> h_cuts; h_cuts.insert(h); h_cuts.insert(0);
	multiset<int> h_segs; h_segs.insert(h);
	char cut;
	int x;
	while(n--){
		cin>>cut>>x;
		if (cut == 'H'){
			h_segs.erase(h_segs.find(*h_cuts.lower_bound(x)-*prev(h_cuts.lower_bound(x))));
			h_segs.insert(*h_cuts.lower_bound(x)-x); h_segs.insert(x-*prev(h_cuts.lower_bound(x)));
			h_cuts.insert(x);
		}
		else{
			w_segs.erase(w_segs.find(*w_cuts.lower_bound(x)-*prev(w_cuts.lower_bound(x))));
			w_segs.insert(*w_cuts.lower_bound(x)-x); w_segs.insert(x-*prev(w_cuts.lower_bound(x)));
			w_cuts.insert(x);
		}
		cout<<(long long int)*prev(w_segs.end())**prev(h_segs.end())<<endl;
	}
}