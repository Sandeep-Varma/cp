#include <bits/stdc++.h>
using namespace std;
#define ll long long

int d = 1000000007;

int rem(int b){
	if (b<=29) return pow(2,b);
	else return ((ll)rem(b/2)*rem(b-b/2))%d;
}

int main(){
	int n;
	cin>>n;
	cout<<rem(n)<<endl;
}