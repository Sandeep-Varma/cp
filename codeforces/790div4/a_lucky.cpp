#include <iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	string x;
	while(n--){
		cin>>x;
		cout<<((int(x[0])+int(x[1])+int(x[2])-int(x[3])-int(x[4])-int(x[5])==0)?"YES":"NO")<<endl;
	}
}