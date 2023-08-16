#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,d; cin>>n>>d;
    queue<int> q;
    vector<int> f(201), fc(201);
    int x;
    for (int i=0; i<d; i++){
        cin>>x; q.push(x); f[x]++;
    }
    fc[0] = f[0];
    for (int i=1; i<201; i++) fc[i] = fc[i-1] + f[i];
    int ans = 0;
    for (int i=d; i<n; i++){
        cin>>x;
        if (d%2){
            auto it = lower_bound(fc.begin(),fc.end(),(d/2)+1);
            if (x >= 2*distance(fc.begin(),it)) ans++;
        }
        else{
            auto it1 = lower_bound(fc.begin(),fc.end(),d/2);
            auto it2 = lower_bound(fc.begin(),fc.end(),(d/2)+1);
            if (x >= distance(fc.begin(),it1)+distance(fc.begin(),it2)) ans++;
        }
        q.push(x); f[x]++;
        int y = q.front();
        q.pop(); f[y]--;
        if (x>y) for (int i=y; i<x; i++) fc[i]--;
        else for (int i=x; i<y; i++) fc[i]++;
    }
    cout<<ans<<endl;
}