#include <iostream>
using namespace std;

int main(){
	int tc; cin>>tc;
	while(tc--){
		long long int x,y; cin>>y>>x;
		if (x==y) cout<<x*x-x+1<<endl;
		else if (x<y){
			if (y%2) cout<<y*y-y+1-(y-x)<<endl;
			else cout<<y*y-y+1+(y-x)<<endl;
		}
		else{
			if (x%2) cout<<x*x-x+1-(y-x)<<endl;
			else cout<<x*x-x+1+(y-x)<<endl;
		}
	}
}
