#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T; cin>>T;
    while(T--){
        int n; cin>>n;
        int a[2*n];
        for(int i=0;i<2*n;i++) cin>>a[i];
        int max_first = 0, min_second = 2*n+1;
        for(int i=0;i<n;i++){
            max_first = max(max_first, a[i]);
            min_second = min(min_second, a[i+n]);
        }
        int operations = 0;
        int count_min_second=0,count_max_first=0;
        for(int i=0;i<n;i++){
            if(a[i] > max_first) count_max_first++;
        }
        for(int i=n;i<2*n;i++){
            if(a[i] < min_second) count_min_second++;
        }
        operations = min(count_max_first,count_min_second);
        cout<<operations<<endl;
    }
    return 0;
}
