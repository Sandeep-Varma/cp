#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,m,k;
	cin>>n>>m>>k;
	vector<int> a(n);
	vector<int> A(m);
	for(int i=0; i<n; i++){ cin>>a[i];}
	for(int i=0; i<m; i++){ cin>>A[i];}
	sort(a.begin(),a.end());
	sort(A.begin(),A.end());
	int **N = new int*[n+1];
	for(int i=0; i<n+1; i++) N[i] = new int[m+1];
	for(int i=0; i<n+1; i++) N[i][0] = 0;
	for(int j=1; j<m+1; j++) N[0][j] = 0;
	for(int i=1; i<n+1; i++)
		for(int j=1; j<m+1; j++){
			N[i][j] = ((a[i-1]-k<=A[j-1] && a[i-1]+k>=A[j-1]) ? N[i-1][j-1]+1 : max(N[i][j-1],N[i-1][j]));
			cout<<i<<" "<<j<<endl;
		}
	cout<<N[n][m]<<endl;
	for(int i=0; i<n+1; i++) delete[] N[i];
	delete[] N;
}