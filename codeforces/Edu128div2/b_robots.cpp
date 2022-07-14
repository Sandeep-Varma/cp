#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T;
	cin>>T;
	while(T--){
		int n,m; cin>>n>>m;
		string s; bool yes = 1;
		int i1=n, j1=m;
		for (int i=0; i<n; i++){
			cin>>s;
			for (int j=0; j<m; j++){
				if (s[j] == 'R'){
					if (i1 == n){
						i1 = i;
						j1 = j;
						m = j;
					}
					else{
						yes = 0;
					}
				}
			}
		}
		cout<<((yes)?"YES":"NO")<<endl;
	}
}