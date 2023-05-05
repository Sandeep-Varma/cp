#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T;
	cin>>T;
	while(T--){
		int n,k; cin>>n>>k;
		vector<int> v1(n),v2;
		for (int i=0; i<n; i++) cin>>v1[i];
		auto it = v1.begin();
		advance(it,k);
		v2 = vector<int>(v1.begin(),it);
		sort(v1.begin(),v1.end());
		sort(v2.begin(),v2.end());
		int ans=0;
		int i,j;
		for (i=0,j=0; j<k && i<k;){
			if (v1[i] == v2[j]){ i++; j++;}
			else{ ans++; i++;}
		}
		cout<<i-j<<endl;
	}
}