#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int x = 0, y;
        for (int i=1; i<=n; i++){
            cin>>y;
            x += (y==i);
        }
        cout<<(x+1)/2<<endl;
    }
}