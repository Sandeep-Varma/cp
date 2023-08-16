#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int q; cin>>q;
    while(q--){
        int n; cin>>n;
        ll m; cin>>m;
        vector<ll> v(n), c(n+1);
        for (int i=0; i<n; i++){
            cin>>v[i];
            v[i] = v[i]%m;
        }
        c[0] = 0;
        for (int i=1; i<=n; i++) c[i] = (c[i-1] + v[i-1])%m;
        set<ll> s = {0};
        ll M = 0;
        for (int i=1; i<=n; i++){
            M = max(M,c[i]);
            auto it = s.lower_bound((c[i]+1)%m);
            if (s.end() != it) M = max(M,(c[i]-*it+m)%m);
            s.insert(c[i]);
        }
        cout<<M<<endl;
    }
}