#include <iostream>
using namespace std;

int main(){
	int N,n;
	cin>>N;
	while(N--){
		cin>>n;
		int a[n];
		cin>>a[0]; int min = a[0];
		for (int i=1; i<n; i++){
			cin>>a[i];
			min = ((a[i]<min)?a[i]:min);
		}
		int sum = 0;
		for (int i=0; i<n; i++){
			sum+=a[i]-min;
		}
		cout<<sum<<endl;
	}
}