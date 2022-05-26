#include <iostream>
#define long long int int
using namespace std;

void swap(int* a, int* b){
	int t = *a;
	*a = *b;
	*b = t;
}

int32_t main()
{
	int N,Q,x;
	cin>>N>>Q;
	int A[N];
	for (int i=0; i<N; i++){
		A[i] = i+1;
	}
	for (int i=0; i<Q; i++){
		cin>>x;
		for (int j=x-1-i; j<N; j++){
			if (x == A[j]){
				swap(&A[j],&A[j+((j==N-1)?-1:1)]);
				break;
			}
		}
	}
	for (int i=0; i<N-1; i++){
		cout<<A[i]<<" ";
	}
	cout<<A[N-1]<<endl;
}