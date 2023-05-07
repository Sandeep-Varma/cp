#include <bits/stdc++.h>
using namespace std;

int f(vector<int> v){
	if (v.size()<3) return INT_MIN;
	else if (v.size() == 3) return v[0]+v[1]+v[2]-2;
	int M = max(f({v.begin(),v.begin()+v.size()/2}),f({v.begin()+v.size()/2,v.end()}));
	int L1 = v[v.size()/2-1], L2 = INT_MIN, L3 = INT_MIN, R1 = v[v.size()/2], R2 = INT_MIN, R3 = INT_MIN;
	for(int i=v.size()/2-2; i>=0; i--){
		L1 = max(L1,v[i]-((int)v.size()/2-1-i));
		L2 = max(L2,v[i+1]);
		L3 = max(L3,v[i]-((int)v.size()/2-1-i)+L2);
	}
	for(int i=v.size()/2+1; i<v.size(); i++){
		R1 = max(R1,v[i]-(i-(int)v.size()/2));
		R2 = max(R2,v[i-1]);
		R3 = max(R3,v[i]-(i-(int)v.size()/2)+R2);
	}
	M = max(M,L1+R3-1);
	M = max(M,L3+R1-1);
	return M;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int T; cin>>T;
	while(T--){
		int n; cin>>n;
		vector<int> b(n);
		for (int i=0; i<n; i++) cin>>b[i];
		cout<<f(b)<<endl;
	}
}