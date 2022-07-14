#include <iostream>
using namespace std;
#define int long long

int maxSum(int* a, int n, int limit){
	if (n==0) return 0;
	if (a[0]==limit) return limit;
	if (a[0]>limit) return maxSum(a+1,n-1,limit);
	return max(maxSum(a+1,n-1,limit),a[0]+maxSum(a+1,n-1,limit-a[0]));
}

int32_t main(){
	int n; cin>>n;
	int a[n];
	for (int i=0; i<n; i++){ cin>>a[i];}
	int sum = 0;
	for (int i=0; i<n; i++){ sum+=a[i];}
	cout<<sum-2*maxSum(a,n,sum/2)<<endl;
}