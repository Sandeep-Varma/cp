#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n; cin>>n;
	unordered_map<int,int> m;
	int x;
	int M=0;
	for (int i=0; i<n; i++){
		cin>>x;
		m[x]++;
		M = max(M,m[x]);
	}
	long long ans=1;
	for (auto a:m){
		ans = 
	}
}