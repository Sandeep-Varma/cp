#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	int n; cin>>n;
	ll x = -8;
	for (int i=1; i<=n; i++){
		x+=2*(ll)i*i*i-3*(ll)i*i-7*(ll)i+16;
		cout<<x<<endl;
	}
}