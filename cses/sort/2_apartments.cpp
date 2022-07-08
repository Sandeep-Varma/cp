#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,m,k;
	cin>>n>>m>>k;
	vector<int> a;
	vector<int> A;
	int x;
	for(int i=0; i<n; i++){ cin>>x; a.push_back(x);}
	for(int i=0; i<m; i++){ cin>>x; A.push_back(x);}
	sort(a.begin(),a.end());
	sort(A.begin(),A.end());
	int N[n+1][m+1];
	for(int i=0; i<n+1; i++) N[i][0] = 0;
	for(int j=1; j<m+1; j++) N[0][j] = 0;
	for(int i=1; i<n+1; i++)
		for(int j=1; j<m+1; j++){
			N[i][j] = ((a[i-1]-k<=A[j-1] && a[i-1]+k>=A[j-1]) ? N[i-1][j-1]+1 : max(N[i][j-1],N[i-1][j]));
		}
	cout<<N[n][m]<<endl;
}