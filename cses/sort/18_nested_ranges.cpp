#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int n; cin>>n;
	vector<vector<int>> v(n,vector<int>(2));
	vector<bool> b(n,false);
	for (int i=0; i<n; i++) cin>>v[i][0]>>v[i][1];
	for (int i=0; i<n; i++){
		if (b[i]) cout<<1;
		
	}
}