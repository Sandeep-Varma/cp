#include <iostream>
#include <vector>
using namespace std;

int main(){
	int N,n,m;
	cin>>N;
	char x;
	while(N--){
		cin>>n>>m;
		int a[n][m];
		for (int i=0; i<n; i++){
			for (int j=0; j<m; j++){
				cin>>x;
				a[i][j] = int(x);
			}
		}
		int min = 1000, temp;
		for (int i=0; i<n; i++){
			for (int j=i+1; j<n; j++){
				temp = 0;
				for (int k=0; k<m; k++){
					temp+=(a[i][k]-a[j][k])*((a[i][k]-a[j][k]>0)?1:-1);
				}
				if (temp<min) min = temp;
			}
		}
		cout<<min<<endl;
	}
}