#include <bits/stdc++.h>
using namespace std;

int main(){
	int n; cin>>n;
	bool a[n] = {0};
	for (int i=0; i<n; i++){ cout<<a[i];} cout<<endl;
	a[n-1]=!a[n-1];
	for (int i=0; i<n; i++){ cout<<a[i];} cout<<endl;
	for (int j=0; j<pow(2,n-1)-1; j++){
		int i;
		for (i=n-1; i>-1; i--){ if (a[i]) break;}
		a[i-1]=!a[i-1];
		for (int i=0; i<n; i++){ cout<<a[i];} cout<<endl;
		a[n-1]=!a[n-1];
		for (int i=0; i<n; i++){ cout<<a[i];} cout<<endl;
	}
}