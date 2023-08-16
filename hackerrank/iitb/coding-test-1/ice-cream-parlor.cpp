#include <bits/stdc++.h>
using namespace std;

vector<pair<int,int>>::iterator partition(vector<pair<int,int>>::iterator p, vector<pair<int,int>>::iterator r){
    auto i = p-1;
    for (auto j = p; j != r; j++){
        if (*j < *r){
            i++;
            swap(*i,*j);
        }
    }
    i++;
    swap(*i,*r);
    return i;
}

void quick_sort(vector<pair<int,int>>::iterator l, vector<pair<int,int>>::iterator r){
    if (distance(l,r) > 0){
        auto pivot = partition(l,r);
        quick_sort(l,pivot-1);
        quick_sort(pivot+1,r);
    }
}

int main(){
    int t; cin>>t;
    while(t--){
        int m,n;
        cin>>m>>n;
        vector<pair<int,int>> a(n);
        for (int i=0; i<n; i++){
            cin>>a[i].first;
            a[i].second = i+1;
        }
        // sort(a.begin(),a.end());
        quick_sort(a.begin(),a.end()-1);
        int i = 0; int j = n-1;
        while (true){
            int x = a[i].first+a[j].first;
            if (x == m) break;
            else if (x > m) j--;
            else i++;
        }
        cout<<min(a[i].second,a[j].second)<<" "<<max(a[i].second,a[j].second)<<endl;
    }
}