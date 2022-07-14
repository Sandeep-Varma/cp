#include <bits/stdc++.h>
using namespace std;

void Transfer(int n, int x, int y){
	if (n==1) cout<<x<<" "<<y<<endl;
	else{
		Transfer(n-1,x,6-x-y);
		cout<<x<<" "<<y<<endl;
		Transfer(n-1,6-x-y,y);
	}
}

int main(){
	int n; cin>>n;
	cout<<pow(2,n)-1<<endl;
	Transfer(n,1,3);
}