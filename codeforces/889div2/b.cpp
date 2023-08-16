#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        long long i=1, n; cin>>n;
        while(n%(i++) == 0){}
        cout<<i-2<<endl;
    }
}