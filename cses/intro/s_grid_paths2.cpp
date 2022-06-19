#include <iostream>
#include <chrono>
#include <thread>
using namespace std;
const int l = 7;
bool a[l][l];
string p;

int PathCount(int n, int r, int c){
	// cout<<"at "<<r<<" "<<c<<" and path covered is "<<n<<endl;
	// this_thread::sleep_for(chrono::seconds(1));
	if (r < 0 || r > l-1 || c > l-1 || c < 0 || !(a[r][c])) return 0;
	a[r][c] = 0;
	int count;
	if (n == l*l-1) count = ((r == l-1 && c == 0)?1:0);
	else if (r == l-1 && c == 0) count = 0;
	else if (p[n] == '?') count = PathCount(n+1,r+1,c)+
								  PathCount(n+1,r-1,c)+
								  PathCount(n+1,r,c+1)+
								  PathCount(n+1,r,c-1);
	else if (p[n] == 'D') count = PathCount(n+1,r+1,c);
	else if (p[n] == 'U') count = PathCount(n+1,r-1,c);
	else if (p[n] == 'L') count = PathCount(n+1,r,c-1);
	else count = PathCount(n+1,r,c+1);
	a[r][c] = 1;
	// cout<<"Returned at "<<r<<" "<<c<<endl;
	return count;
}

int main(){
	cin>>p;
	for (int i=0; i<l; i++){ for (int j=0; j<l; j++){ a[i][j] = 1;}}
	cout<<PathCount(0,0,0)<<endl;
}