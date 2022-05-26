#include <iostream>
using namespace std;

int main(){
	int N,n,m;
	cin>>N;
	string x;
	while(N--){
		cin>>n>>m;
		int a[n][m];
		for (int i=0; i<n; i++){
			for (int j=0; j<m; j++){
				cin>>a[i][j];
			}
		}
		int max = 0, sum, k;
		for (int i=0; i<n; i++){
			for (int j=0; j<m; j++){
				sum=a[i][j];
				k=0;
				while(++k){
					if (i+k<n && j+k<m) sum+=a[i+k][j+k];
					else break;
				}
				k=0;
				while(++k){
					if (i+k<n && j-k>=0) sum+=a[i+k][j-k];
					else break;
				}
				k=0;
				while(++k){
					if (i-k>=0 && j+k<m) sum+=a[i-k][j+k];
					else break;
				}
				k=0;
				while(++k){
					if (i-k>=0 && j-k>=0) sum+=a[i-k][j-k];
					else break;
				}
				if (sum>max) max = sum;
			}
		}
		cout<<max<<endl;
	}
}