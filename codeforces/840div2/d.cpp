#include <bits/stdc++.h>
using namespace std;
#define l long long

const l M = 1000000007;

// nCr function fastest (overflow is solved for some extent but not completely)
l Combination(int n, int r) {
    if (r > n) return 0;
	if(r > n - r) r = n - r;
    long long ans = 1;
    int i;
    for(i = 1; i <= r; i++) {
        ans *= n - r + i;
        ans /= i;
    }
    return ans;
}

// modular nCr function without overflow and with memoization
vector<vector<l>> Comb(101,vector<l>(101,-1));
l C(l n,l r)
{
	if (r > n) return 0;
	if (n - r < r) r = n-r;
	if (r == 0) return 1;
    if (r == 1) return n;
	if (Comb[n][r] != -1) return Comb[n][r];
    Comb[n][r] = (C(n-1,r)%M + C(n-1,r-1)%M)%M;
	return Comb[n][r];
}

// fastest exponentiation
l pow(l x, l n)
{
    l result = 1;
    while (n > 0) {
        if (n%2) result = result * x;
        x = x*x;
        n = n >> 1;
    }
    return result;
}
// fastest modular exponentiation without overflow
l powmod(l x, l n, l M)
{
    l result = 1;
	x = x%M;
    while (n > 0) {
        if (n%2) result = (result * x)%M;
        x = (x*x)%M;
        n = n >> 1;
    }
    return result;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int T; cin>>T;
	while(T--){
		int n,i,j,x,y;
		cin>>n>>i>>j>>x>>y;
		// cout<<n<<" "<<i<<" "<<j<<" "<<x<<" "<<y<<endl;
		if (x > y){
			swap(x,y);
			swap(i,j);
			i = n+1-i;
			j = n+1-j;
		}
		if (y == n){
			if (j == n) cout<<0<<endl;
			else cout<<(C(y-x-1,j-i-1)%M*C(x-1,i-1)%M)%M<<endl;
		}
		else{
			// cout<<n<<" "<<i<<" "<<j<<" "<<x<<" "<<y<<endl;
			if (n-j<x-i) cout<<0<<endl;
			else{
			cout<<(
				((C(y-x-1,j-i-1)*C(x-1,i-1))%M)*(((l)powmod(2,n-y-1,M)-((y==j)?1:0))%M)
			+	((C(x-1,i-1)*C(y-x-1,n+i-j-x))%M)*(((l)powmod(2,n-y-1,M))%M)
			)%M<<endl;
			}
		}
	}
}