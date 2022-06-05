#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	if (!((n%4)%3)){
		cout<<"YES"<<endl;
		if (n%2){
			cout<<n/2+1<<endl;
			for (int i=n; i>=4; i--){ if ((i%4)%3) cout<<to_string(i)<<" ";}
			cout<<"2 1 "<<endl;
			cout<<n/2<<endl;
			for (int i=n; i>=4; i--){ if (!((i%4)%3)) cout<<to_string(i)<<" ";}
			cout<<"3 "<<endl;
		}
		else{
			cout<<n/2<<endl;
			for (int i=n; i>=1; i--){ if ((i%4)/2) cout<<to_string(i)<<" ";}
			cout<<endl<<n/2<<endl;
			for (int i=n; i>=1; i--){ if (!((i%4)/2)) cout<<to_string(i)<<" ";}
			cout<<endl;
		}
	}
	else cout<<"NO"<<endl;
}