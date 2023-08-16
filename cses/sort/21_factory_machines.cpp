#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n,t; cin>>n>>t; t--;
    multiset<pair<int,int>> s = {{(int)pow(10,18),(int)pow(10,18)}};
    for (int i=0; i<n; i++){
        int x; cin>>x; s.insert({x,x});
    }
    while(t>0){
        auto l = s.begin();
        auto u = s.upper_bound({l->first,l->first});
        if (t<distance(l,u)) advance(u,t-distance(l,u));
        int nt = 1;
        if (*prev(u) == *l) nt = min((u->first-l->first)/l->second, t/distance(l,u));
        t-=distance(l,u)*nt;
        multiset<pair<int,int>> s_temp;
        for (auto it=l; it!=u; it++) s_temp.insert({it->first+nt*(it->second),it->second});
        s.erase(l,u);
        s.insert(s_temp.begin(),s_temp.end());
    }
    cout<<s.begin()->first<<endl;
}