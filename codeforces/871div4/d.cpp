#include <bits/stdc++.h>
using namespace std;

int p(int x, int b){
	int exp = 0;
	while(x%b == 0){
		x = x/b; exp++;
	}
	return exp;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int T; cin>>T;
	while(T--){
		int n,m; cin>>n>>m;
		// (2^i)*n/(3^j) == m // i <= j
		int i = p(m,2)-p(n,2);
		int j = p(n,3)-p(m,3);
		cout<<(i>=0 && j>=0 && i<=j && n*(int)pow(2,i) == m*(int)pow(3,j)?"YES":"NO")<<endl;
	}
}