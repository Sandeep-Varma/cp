#include <iostream>
using namespace std;

int main(){
	int n; cin>>n;
	if (n==1) cout<<1<<endl;
	else if (n<4) cout<<"NO SOLUTION"<<endl;
	else if (n==4) cout<<"2 4 1 3"<<endl;
	else{
		int i=1,j=(n+1)/2+1;
		while(j<=n){
			cout<<i<<" "<<j<<" ";
			i++; j++;
		}
		if (n%2) cout<<(n+1)/2;
		cout<<endl;
	}
}
