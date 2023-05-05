#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
	if (b>a) swap(a,b);
	if (b == 0) return a;
	return gcd(b,a%b);
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int T; cin>>T;
	while(T--){
		int n; cin>>n;
		vector<int> a(n);
		for (int i=0; i<n; i++) cin>>a[i];
		int x = 0;
		for (int i=0; 2*i<n-1; i++) x = gcd(x,abs(a[i]-a[n-1-i]));
		cout<<x<<endl;
	}
}