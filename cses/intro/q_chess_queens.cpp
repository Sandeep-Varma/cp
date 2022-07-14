#include <iostream>
using namespace std;

int Ways(bool Free[][8], int n){
	if (n == 8) return 1;
	bool free[8][8];
	for (int i=0; i<n; i++){ for (int j=0; j<8; j++){ free[i][j]=0;}}
	for (int i=n; i<8; i++){ for (int j=0; j<8; j++){ free[i][j]=Free[i][j];}}
	int w=0;
	for (int j=0; j<8; j++){
		if (free[n][j]){
			for (int k=0; k<8; k++){ free[n][k]=0;}
			for (int i=n+1; i<8; i++){ free[i][j]=0;}
			for (int k=1; (n+k<8 && j+k<8); k++){ free[n+k][j+k]=0;}
			for (int k=1; (n+k<8 && j-k>=0); k++){ free[n+k][j-k]=0;}
			w+=Ways(free,n+1);
			for (int k=0; k<8; k++){ free[n][k]=Free[n][k];}
			for (int i=n+1; i<8; i++){ free[i][j]=Free[i][j];}
			for (int k=1; (n+k<8 && j+k<8); k++){ free[n+k][j+k]=Free[n+k][j+k];}
			for (int k=1; (n+k<8 && j-k>=0); k++){ free[n+k][j-k]=Free[n+k][j-k];}
		}
	}
	return w;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	bool free[8][8];
	char x;
	for(int i=0; i<8; i++){ for(int j=0; j<8; j++){ cin>>x; free[i][j] = (x == '.');}}
	cout<<Ways(free,0)<<endl;
}