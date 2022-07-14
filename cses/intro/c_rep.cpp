#include <iostream>
using namespace std;

int main(){
	string s; cin>>s;
	char prev='X';
	int l=0, maxl=0;
	for(int i=0; i<s.size(); i++){
		if (s[i]-prev==0) l++;
		else{
			maxl = ((l>maxl)?l:maxl);
			l=1;
		}
		prev = s[i];
	}
	maxl = ((l>maxl)?l:maxl);
	cout<<maxl<<endl;
}
