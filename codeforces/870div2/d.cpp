#include <bits/stdc++.h>
using namespace std;

int f(vector<int> v){
	if (v.size()<3) return INT_MIN;
	else if (v.size() == 3) return v[0]+v[1]+v[2]-2;
	int M = max(f({v.begin(),v.begin()+v.size()/2}),f({v.begin()+v.size()/2,v.end()}));
	vector<int> v1(v.size()/2),v2(v.size()-v.size()/2);
	v1[0] = INT_MIN;
	for (int i=1; i<v1.size(); i++) v1[i] = max(v1[i-1],v[v.size()/2-i]);
	v2[0] = INT_MIN;
	for (int i=1; i<v2.size(); i++) v2[i] = max(v2[i-1],v[v.size()/2+i-1]);
	for (int i=0; i<v1.size(); i++){
		for (int j=0; j<v2.size(); j++){
			if (i+j+1>=2) M = max(M,v[v.size()/2-i-1]+v[v.size()/2+j]+max(v1[i],v2[j])-i-j-1);
		}
	}
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