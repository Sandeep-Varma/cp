#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,q; cin>>n>>q;
    vector<int> v(n), a(n,INT_MAX);
    for (int i=0; i<n; i++){
        cin>>v[i];
        a[0] = min(a[0],v[i]);
    }
    for (int d=2; d<=n; d++)
        for (int i=0; i<n-d+1; i++){
            v[i] = max(v[i],v[i+1]);
            a[d-1] = min(a[d-1],v[i]);
        }
    while(q--){
        int x; cin>>x;
        cout<<a[x-1]<<endl;
    }
}