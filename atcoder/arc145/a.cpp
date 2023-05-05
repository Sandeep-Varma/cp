#include <bits/stdc++.h>
using namespace std;

bool check(string s){
	int n = s.size();
	if (n == 1) return 1;
	else if (n == 2){
		if (s[0] == s[1]) return 1;
		else return 0;
	}
	else{
		if (s[n-1] == 'B'){
			if (s[0] == 'A') return 0;
			else check(s.substr(1,n-2));
		}
		else{
			if (n%2) return 1;
			else{
				if (s[0] == 'A'){
					if (s[1] == 'A'){
						if (check("B"+s.substr(2,n-3))) return 1;
						else return check(s.substr(1,n-2));
					}
					else return check(s.substr(1,n-2));
				}
				else{
					if ("B"+check(s.substr(2,n-3))) return 1;
					else return check(s.substr(1,n-3)+"A");
				}
			}
		}
	}
	return 0;
}

int main(){
	int n; cin>>n;
	string s; cin>>s;
	cout<<((check(s))?"YES":"NO")<<endl;
}