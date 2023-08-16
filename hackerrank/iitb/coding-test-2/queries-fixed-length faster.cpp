#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,q; cin>>n>>q;
    vector<int> v(n), a(n,INT_MAX);
    for (int i=0; i<n; i++){
        cin>>v[i];
    }
    while(q--){
        int x; cin>>x;
        
        cout<<a[x-1]<<endl;
    }
}