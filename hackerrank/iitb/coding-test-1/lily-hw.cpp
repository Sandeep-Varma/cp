#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    vector<int> a(n), b(n);
    for (int i=0; i<n; i++) cin>>a[i];
    b = a;
    int swaps1 = 0;
    for (int i=0; i<n-1; i++){
        int k = i;
        for (int j=i+1; j<n; j++) if (a[j] < a[k]) k=j;
        if (k != i){
            swap(a[i],a[k]);
            swaps1++;
        }
    }
    int swaps2 = 0;
    for (int i=n-1; i>0; i--){
        int k = i;
        for (int j=i-1; j>=0; j--) if (b[j] < b[k]) k=j;
        if (k != i){
            swap(b[i],b[k]);
            swaps2++;
        }
    }
    cout<<min(swaps1,swaps2)<<endl;
}