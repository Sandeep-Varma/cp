#include <bits/stdc++.h>
using namespace std;

// Function to find the smallest divisor
int smallestDivisor(int n)
{
	for (int i = 2; i <= sqrt(n); i += 2) {
		if (n % i == 0) return i;
	}
	return n;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int T; cin>>T;
	while(T--){
		int n,x; cin>>n>>x;
		if (n == x){
			cout<<n<<" ";
			for (int i=2; i<n; i++) cout<<i<<" ";
			cout<<1<<" "<<endl;
		}
		else if (n%x) cout<<-1<<endl;
		else{
			cout<<x<<" ";
			int i;
			for (i=2; i<x; i++) cout<<i<<" ";
			int div = smallestDivisor(n/x);
			while(div != n/x){
				cout<<x*div<<" ";
				for (i=x+1; i<x*div; i++) cout<<i<<" ";
				x = x*div;
				div = smallestDivisor(n/x);
			}
			cout<<n<<" ";
			for (int i=x+1; i<n; i++) cout<<i<<" ";
			cout<<1<<" "<<endl;
		}
	}
}
