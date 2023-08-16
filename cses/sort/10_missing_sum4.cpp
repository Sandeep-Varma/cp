#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    vector<int> v(n);
    for (int i=0; i<n; i++) cin>>v[i];
    sort(v.begin(),v.end());
    int i;
    long long sum = 0;
    for (i=0; i<n; i++){
        if (v[i] > sum+1){
            cout<<sum+1<<endl;
            break;
        }
        else sum+=v[i];
    }
    if (i == n) cout<<sum+1<<endl;
}