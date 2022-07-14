#include <bits/stdc++.h>
using namespace std;

int main(){
	string s; cin>>s;
	map<char,int> m;
	for(int i=0; i<s.size(); i++){m[s[i]]++;}
	bool odd = 0;
	char oddChar = ' ';
	int oddCharLen;
	for(auto x:m){
		if (odd){
			if (x.second%2){
				cout<<"NO SOLUTION"<<endl;
				return 0;
			}
		}
		else{
			if (x.second%2){
				odd = 1;
				oddChar = x.first;
				oddCharLen = x.second;
				m[x.first] = 0;
			}
		}
	}
	string pal = "", palprefix = "";
	if (oddChar != ' '){
		for (int i=0; i<oddCharLen; i++){
			pal = pal + oddChar;
		}
	}
	for (auto x:m){
		string temp = "";
		for (int i=0; i<x.second; i+=2){
			temp += x.first;
		}
		pal = pal + temp;
		palprefix = temp + palprefix;
	}
	cout<<palprefix<<pal<<endl;
}