#include <bits/stdc++.h>
using namespace std;
#define ll long long

int func(vector<int> &v, int i, int j){
    if (j-i == 1) return ((((ll)pow(v[i],2))%998244353)*v[i])%998244353;
    int k = (i+j+1)/2;
    ll ans1 = func(v,i,k);
    ll ans2 = func(v,k,j);
    ll ans = (ans1+ans2)%998244353;
    ll a3=0,b3=0,a2=0,b2=0,a1=0,b1=0,a=0,b=0;
    for (int x=k-1; x>=i; x--){
        a = (a+v[x])%998244353;
        a1 = (a1+a)%998244353;
        a2 = (a2+(ll)pow(a,2)%998244353)%998244353;
        a3 = (a3+(((ll)pow(a,2)%998244353)*a)%998244353)%998244353;
    }
    for (int x=k; x<j; x++){
        b = (b+v[x])%998244353;
        b1 = (b1+b)%998244353;
        b2 = (b2+(ll)pow(b,2)%998244353)%998244353;
        b3 = (b3+(((ll)pow(b,2)%998244353)*b)%998244353)%998244353;
    }
    ans = (ans + ((j-k)*a3)%998244353)%998244353;
    ans = (ans + ((k-i)*b3)%998244353)%998244353;
    ans = (ans + 3*(((a2)*(b1))%998244353))%998244353;
    ans = (ans + 3*(((a1)*(b2))%998244353))%998244353;
    return (int)ans;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int T; cin>>T;
	while(T--){
        int n; cin>>n;
		vector<int> a(n);
		for (int i=0; i<n; i++) cin>>a[i];
		cout<<func(a,0,n)<<endl;
	}
}