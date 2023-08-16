#include <bits/stdc++.h>
using namespace std;
#define int long long

int solution(vector<int>::iterator start, vector<int>::iterator end){
    int d = distance(start,end);
    if (d <= 1) return 0;
    if (d == 2) return *start ^ *--end;
    auto min1 = min_element(start,end);
    auto min2 = start;
    for (auto it=start; it!=end; it++){
        if (it == min1) continue;
        else if (*it < *min2) min2 = it;
    }
    if (distance(min1,min2)<0) swap(min1,min2);
    int ans = *min1 ^ *min2;
    ans = max(ans,solution(start,min2));
    ans = max(ans,solution(++min1,end));
    return ans;
}

int32_t main(){
    int n; cin>>n;
    vector<int> a(n);
    for(int i=0; i<n; i++) cin>>a[i];
    cout<<solution(a.begin(),a.end());
    // int i=0, j=1,
    // k = (a[0]>=a[1]);
    // int M = a[i] ^ a[k];
    // while(true){
    //     if (j == n-1){
    //         if (i == j-1) break;
    //         else i++;
    //     }
    //     else{
    //         if (a[j+1] <= a[i]){
    //             i++; j++;
    //         }
    //     }
    //     M = max(M,a[i] ^ a[k]);
    // }
    // cout<<M<<endl;
}