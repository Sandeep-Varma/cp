#include <iostream>
using namespace std;

int maxdist(int &n, int &k, int *a, int n0){
	long long int sum=0, i0=-1;
	for (int i=0; i<n; i++){
		sum+=a[i];
		if (i0==-1) if (a[i]==0) i0=i;
	}
	if (sum>(long long int)n0*k || sum<-1*(long long int)n0*k) return -1;
	else if (n0==0){
		int max=0, min=0;
		long long int cum_sum = 0;
		for(int i=0; i<n; i++){
			cum_sum+=a[i];
			if (cum_sum>max) max=cum_sum;
			if (cum_sum<min) min=cum_sum;
		}
		return max-min+1;
	}
	else if (n0 == 1){
		a[i0] = -sum;
		return maxdist(n,k,&a[0],0);
	}
	else if (n0 == 2){
		int max = -1, temp;
		for (int j=k-sum; j>-k-1-sum; j--){
			a[i0]=j;
			temp = maxdist(n,k,&a[0],n0-1);
			if (temp>max) max=temp;
		}
		return max;
	}
	int max = -1, temp;
	for (int j=k; j>-k-1; j--){
		a[i0]=j;
		temp = maxdist(n,k,&a[0],n0-1);
		if (temp>max) max=temp;
	}
	return max;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int n,k; cin>>n>>k;
	int a[n], x, n0 = 0;
	for (int i=0; i<n; i++){
		cin>>x;
		a[i] = x;
		if (x==0) n0++;
	}
	cout<<maxdist(n,k,&a[0],n0)<<endl;
}