#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int n; cin>>n;
	vector<int> a, t;
	double sum = 0;
	int x;
	for (int i=0; i<n; i++){ cin>>x; a.push_back(x); sum+=x;}
	int max_n, csum;
	
	int q;
	cin>>q;
	while(q--){
		cin>>x;
		cout<<(((int)ceil(sum/x)<max_n+1)?(int)ceil(sum/x):-1)<<endl;
	}
}