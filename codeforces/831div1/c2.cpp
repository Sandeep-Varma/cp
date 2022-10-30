#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T;
	cin>>T;
	while(T--){
		int n; cin>>n;
    	vector<int>vec(n);
    	for(int i=0;i<n;i++) cin>>vec[i];
    	sort(vec.begin(),vec.end());
    	int ans1=0;
    	for(int i=1;i<n-1;i++) ans1=max(ans1,vec[i+1]-vec[i]+vec[i+1]-vec[0]);
    	int ans2=0;
    	for(int i=0;i<n-2;i++) ans2=max(ans2,vec[i+1]-vec[i]+vec[n-1]-vec[i]);
    	cout<<max(ans1,ans2)<<"\n";
	}
}