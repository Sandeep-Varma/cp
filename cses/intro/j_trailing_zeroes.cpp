#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int n; cin>>n;
	int sum = 0, k = 1;
	while(n/pow(5,k)>=1){
		sum+=n/pow(5,k); k++;
	}
	cout<<sum<<endl;
}