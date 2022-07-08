#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
  if (b == 0) return a;
  return gcd(b, a % b);
}

int lcm(int a, int b){
    return (a / gcd(a, b)) * b;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T;
	cin>>T;
	while(T--){
		int n,q; cin>>n>>q;
		int u,v,x;
		while(q--){
			cin>>u>>v;
			x = gcd(u,v);
			if (x) cout<<min(u/x+v/x,lcm(u/x,v/x))<<endl;
			else if (u%v) cout<<v/u<<endl;
			else cout<<u/v<<endl;
		}
	}
}