#include <bits/stdc++.h>
using namespace std;

int min_swaps_in_permutation(vector<int> v){
    int n = v.size();
    vector<int> p(n);
    for (int i=0; i<n; i++) p[v[i]] = i;
    int swaps = 0;
    for (int i=0; i<n; i++){
        if (v[i] == i) continue;
        else{
            swaps++;
            int j = p[i];
            swap(v[i],v[j]);
            swap(p[i],p[v[j]]);
        }
    }
    return swaps;
}

int main(){
    int n; cin>>n;
    vector<pair<int,int>> a(n);
    for (int i=0; i<n; i++){
        cin>>a[i].first;
        a[i].second = i;
    }
    
    sort(a.begin(),a.end());
    vector<int> v1(n), v2(n);
    for (int i=0; i<n; i++) v2[n-1-i] = v1[i] = a[i].second;
    cout<<min(min_swaps_in_permutation(v1),min_swaps_in_permutation(v2))<<endl;
}