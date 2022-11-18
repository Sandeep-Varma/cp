#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n; cin>>n;
    vector<int> v(n);
    for (int i=0; i<n; i++) cin>>v[i];
    vector<int> v1 = v;
    sort(v1.begin(),v1.end());
    vector<int> d;
    for (int i=0; i<n; i++) if (v1[i] != v[i]) d.push_back(i);
    if (d.size() == 0) cout<<"yes"<<endl;
    else if (d.size() == 1) cout<<"no"<<endl;
    else if (d.size() == 2) cout<<"yes"<<endl<<"swap "<<d[0]+1<<" "<<d[1]+1<<endl;
    else{
        reverse(v.begin()+d[0],v.begin()+d[d.size()-1]+1);
        if (v == v1) cout<<"yes"<<endl<<"reverse "<<d[0]+1<<" "<<d[d.size()-1]+1<<endl;
        else cout<<"no"<<endl;
    }
    // vector<int> y;
    // for(int i=0; i<n-1; i++) if (v[i]<=v[i+1]) y.push_back(i);
    // if (y.size() == 0) cout<<"yes"<<endl;
    // else if (y.size() == 1){
    //     if (y[0] == n-2){
    //         if (v[n-3]<v[n-1]){
    //             cout<<"yes"<<endl;
    //             cout<<"swap "<<n-2<<" "<<n<<endl;
    //         }
    //         else cout<<"no"<<endl;
    //     }
    // }
    // else if (y.size() == 2){
    //     cout<<"yes"<<endl;
    //     cout<<"swap "<<y[0]+1<<" "<<y[1]+1<<endl;
    // }
}