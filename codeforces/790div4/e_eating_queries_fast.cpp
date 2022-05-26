#include <iostream>
#include <set>
#include <vector>
using namespace std;

int BinarySearch(int* A, int m, int n, int q){
	// works like set.lower_bound()
	int x = (m+n)/2;
	if (n-m==0){
		if (q<=A[m]) return m;
		else return -1;
	}
	if (A[x]<q) return BinarySearch(A,x+1,n,q);
	else return BinarySearch(A,m,x,q);
}

int main(){
	int N,n,q;
	cin>>N;
	while(N--){
		cin>>n>>q;
		multiset<int> A;
		int y,z;
		for (int i=0; i<n; i++){
			cin>>y;
			A.insert(y);
		}
		int S[n];
		int s=0;
		y=0;
		for (auto x=A.end(); x!=A.begin();){
			x--;
			S[y]=*x+s;
			s=*x+s;
			y++;
		}
		while(q--){
			cin>>y;
			z = BinarySearch(S,0,n-1,y);
			if (z!=-1) cout<<z+1<<endl;
			else cout<<-1<<endl;
		}
	}
}
