#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T;
	cin>>T;
	while(T--){
		int d;
		cin>>d;
		string s;
		cin>>s;
		int x = (int)s[0]-48;
		if (x<9) { for (int i=0; i<d; i++) { cout<<9-(int)s[i]+48;}}
		else {
			int a[d+1];
			for (int i=1; i<d+1; i++){ a[i]=1;}
			for (int i=d; i; i--){
				if (a[i]<(int)s[i-1]-48){
					a[i-1]=0;
					a[i]+=10;
				}
				a[i]-=(int)s[i-1]-48;
			}
			for (int i=1; i<d+1; i++) { cout<<a[i];}
		}
		cout<<endl;
	}
}