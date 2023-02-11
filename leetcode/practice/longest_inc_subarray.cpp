#include <bits/stdc++.h>
using namespace std;

int solve(vector<int> &v){
    int n = v.size();
    vector<int> l(n);
    set<pair<int,int>> s;
    l[0] = 1;
    s.insert({l[0],v[0]});
    for (int i=1; i<n; i++){
        for (auto x: s){ cout<<x.first<<" "<<x.second<<endl;}
        cout<<"Binary search for "<<l[i-1]<<" "<<v[i]<<endl;
        set<pair<int,int>>::iterator it = s.lower_bound({l[i-1],v[i]});
        if (it == s.end()) cout<<"Binary search result: end"<<endl;
        else cout<<"Binary search result: "<<(*it).first<<" "<<(*it).second<<endl;
        if (it == s.begin()){
            l[i] = l[i-1];
            s.insert({1,v[i]});
        }
        else{
            it--;
            l[i] = max(l[i-1],(*it).first+1);
            s.insert({(*it).first+1,v[i]});
        }
        cout<<l[i]<<" Bye"<<endl<<endl;
    }
    return l[n-1];
}

int main(){
    int T; cin>>T;
    while(T--){
        int n; cin>>n;
        vector<int> v(n);
        for (int i=0; i<n; i++) cin>>v[i];
        cout<<solve(v)<<endl;
    }
}