#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T;
	cin>>T;
	while(T--){
		string s;
		cin>>s;
		int a=0,b=0;
// a is zeroes left, b is ones removed
		for (char c:s){
			if (c=='0') a++;
		}
		// current substring
		int i=0,j=s.size()-1;
		while(s[i]=='0'){ i++; a--;}
		while(s[j]=='0'){ j--; a--;}
		while(a>b){
			int zb=0;
			for (int x=0; x<a-b; x++){
				if (s[i+x]=='0') zb++;
				if (s[j-x]=='0') zb--;
			}
			if (zb>=0){
				// cout<<"left"<<endl;
				i++; b++;
				// if (a<=b) break;
				while(s[i]=='0'){ i++; a--;}
			}
			else{
				// cout<<"right"<<endl;
				j--; b++;
				// if (a<=b) break;
				while(s[j]=='0'){ j--; a--;}
			}
		}
		cout<<b<<endl;
	}
}