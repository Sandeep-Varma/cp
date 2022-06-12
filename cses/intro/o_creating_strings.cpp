#include <iostream>
#include <vector>
#include <map>
using namespace std;

int Comb(int n, int r){
	double x = 1;
	for (int i=0; i<r; i++){ x = (x*(n-i))/(r-i);}
	return x;
}

void CountPerms(map<char,int> m, int l){
	int n = l, ans = 1;
	for (auto x:m){ ans *= Comb(n,x.second); n-=x.second;}
	cout<<ans<<endl;
}

vector<string> Permutate(int l, map<char,int> M){
	if (!(l)) return vector<string>{""};
	vector<string> words;
	map<char,int> m = M;
	for (auto x:m){
		if (x.second){
			m[x.first]--;
			vector<string> p = Permutate(l-1,m);
			for (auto y:p){ words.push_back(x.first+y);}
			m[x.first]++;
		}
	}
	return words;
}

int main(){
	string s; cin>>s;
	map<char,int> m;
	for (int i=0; i<s.size(); i++){ m[s[i]]++;}
	CountPerms(m,s.size());
	vector<string> allWords = Permutate(s.size(), m);
	for (auto x:allWords){ cout<<x<<endl;}
}