#include <iostream>
#include <unordered_map>
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
	int V[N+1]; // (position -> value)
    int P[N+1]; // (value -> position)
	for (int i=1; i<=N; i++){
		V[i] = i;
        P[i] = i;
	}
	for (int i=0; i<Q; i++){
		cin>>x;
        swap( &V[P[x]], &V[P[x]+((P[x]==N)?-1:1)]);
        swap( &P[x], &P[V[P[x]]]);
	}
	for (int i=1; i<=N-1; i++){
		cout<<V[i]<<" ";
	}
	cout<<V[N]<<endl;
}