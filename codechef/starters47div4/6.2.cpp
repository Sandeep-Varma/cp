#include <bits/stdc++.h>
using namespace std;

int main(){
    int T; cin>>T;
    while(T--){
        int n; cin>>n;
        vector<int> a(n);
        for (int i=0; i<n; i++) cin>>a[i];
        sort(a.begin(),a.end());
        int sad = 0;
        for (int i=0; i<n; i++){
            if (i == n-1) sad++;
            else if (a[i] != a[i+1]) sad++;
            else{
                while(a[i] == a[i+1] && i<n-1) i++;
            }
        }
        cout<<(sad+1)/2<<endl;
    }
}