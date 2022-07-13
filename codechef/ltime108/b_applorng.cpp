#include <iostream>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int X,A,B;
	cin>>X>>A>>B;
	cout<<((X>=A+B)?"Yes":"No")<<endl;
}