#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,k; cin>>n>>k;
    vector<int> a(n);
    for (int i=0; i<n; i++) cin>>a[i];
    sort(a.begin(),a.end());
    int i=0, j=0;
    int x = 0;
    while(true){
        if (a[j]-a[i] > k) i++;
        else if (a[j]-a[i] < k){
            if (j == n-1) break;
            else j++;
        }
        else{
            x++;
            if (j == n-1) break;
            else{
                i++;
                j++;
            }
        }
    }
    cout<<x<<endl;
}