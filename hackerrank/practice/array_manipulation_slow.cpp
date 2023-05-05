#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    vector<long> V(n,0);
    int i1,i2,x;
    while(m--){
        cin>>i1>>i2>>x;
        for (int i=i1-1; i<i2; i++) V[i]+=x;
    }
    cout<<*max_element(V.begin(),V.end())<<endl;
}