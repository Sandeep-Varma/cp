#include <bits/stdc++.h>
using namespace std;

int main(){
	int n; cin>>n;
	bool a[n+1] = {0};
	for (int i=n; i>0; i--){ cout<<a[i];} cout<<endl;
	int x;
	for (int j=1; j<(1<<n); j++){
		// least significant bit of j which is true or 1
		x = __builtin_ffs(j);
		a[x]=!a[x];
		for (int i=n; i>0; i--){ cout<<a[i];} cout<<endl;
	}
}