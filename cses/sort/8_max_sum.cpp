#include <iostream>
using namespace std;
#define ll long long

ll max_sum(int* A, int n){
	if (n == 1) return A[0];
	ll s1 = A[n/2-1], s1max = A[n/2-1];
	for (int i = n/2-2; i>=0; i--){
		s1+=A[i];
		if (s1>s1max) s1max = s1;
	}
	ll s2 = A[n/2], s2max = A[n/2];
	for (int i = n/2+1; i<n; i++){
		s2+=A[i];
		if (s2>s2max) s2max = s2;
	}
	return max(max(max_sum(&A[0],n/2),max_sum(&A[n/2],n-n/2)),s1max+s2max);
}

int main(){
	int n; cin>>n;
	int A[n];
	for (int i=0; i<n; i++){ cin>>A[i];}
	cout<<max_sum(&A[0],n)<<endl;
}