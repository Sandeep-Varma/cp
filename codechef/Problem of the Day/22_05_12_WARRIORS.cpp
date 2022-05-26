#include <bits/stdc++.h>
using namespace std;

int BinarySearch(unsigned long long int* A, int m, int n, unsigned long long int q){
	// works like set.upper_bound()
	int x = (m+n)/2;
	// cout<<m<<" "<<x<<" "<<n<<endl;
	if (n-m==0){
		if (q<A[m]) return m;
		else return m+1;
	}
	if (A[x]<=q) return BinarySearch(A,x+1,n,q);
	else return BinarySearch(A,m,x,q);
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T;
	cin>>T;
	while(T--){
		int N,Q;
		cin>>N>>Q;
		multiset<int> P;
		int p;
		for (int i=0; i<N; i++){
			cin>>p;
			P.insert(p);
		}
		unsigned long long int A[N];
		unsigned long long int sum=0;
		int i=0;
		for (unsigned long long int x:P){
			sum+=x*pow(2,N-i-1);
			A[i] = sum;
			i++;
		}
		// for(i=0; i<N; i++){
		// 	cout<<A[i]<<" ";
		// }cout<<endl;
		unsigned long long int q;
		while(Q--){
			cin>>q;
			// cout<<"N is "<<N<<" and 2^N-1 is "<<pow(2,N-1)<<endl;
			q = q*pow(2,N-1);
			// cout<<q<<endl;
			if (q == A[BinarySearch(A,0,N-1,q)-1]) cout<<BinarySearch(A,0,N-1,q)-1<<endl;
			else cout<<BinarySearch(A,0,N-1,q)<<endl;
		}
	}
}