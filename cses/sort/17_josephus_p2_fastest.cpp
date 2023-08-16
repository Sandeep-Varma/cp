#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, k, size; cin>>n>>k;
	vector<int> v(n);
	for (int i=0; i<n; i++) v[i] = i+1;
	int i=1;
	while(n>0){
		while(i<n){
			i = (i+k%n)%n;
			v[i] = 0;
		}

		n = v.size();
	}
	cout<<endl;
}