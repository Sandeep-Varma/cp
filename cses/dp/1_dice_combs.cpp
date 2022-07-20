#include <bits/stdc++.h>
using namespace std;



int diceCombs(int n, int* D){
	if (n<0) return 0;
	if (n<2) return 1;
	if (D[n]>=0) return D[n];
	D[n] = diceCombs(n-1,D)+diceCombs(n-2,D)
		   +diceCombs(n-3,D)+diceCombs(n-4,D)
			+diceCombs(n-5,D)+diceCombs(n-6,D);
	return D[n];
}

int main(){
	int n; cin>>n;
	int D[n] = {-1};
	cout<<diceCombs(n,D)<<endl;
}