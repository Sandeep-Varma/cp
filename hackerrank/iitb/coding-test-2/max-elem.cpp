#include <bits/stdc++.h>
using namespace std;

int main(){
    stack<pair<int,int>> s;
    int M = INT_MIN;
    int n, type; cin>>n;
    while(n--){
        cin>>type;
        if (type == 1){
            int x; cin>>x;
            M = max(x,M);
            s.push({x,M});
        }
        else if (type == 2){
            s.pop();
            if (s.size() == 0) M = INT_MIN;
            else M = s.top().second;
        }
        else cout<<M<<endl;
    }
}