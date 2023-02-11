#include <bits/stdc++.h>
using namespace std;

int M = 1000000007;

vector<vector<int>> Comb(100001,vector<int>(100001,-1));

int C(int n,int r)
{
	if (r > n) return 0;
	if (n - r < r) r = n-r;
	if (r == 0) return 1;
    if (r == 1) return n;
	if (Comb[n][r] != -1) return Comb[n][r];
    Comb[n][r] = ((long)C(n-1,r) + (long)C(n-1,r-1))%M;
	return Comb[n][r];
}

int countAnagrams(string s){
    vector<int> spaces;
    spaces.push_back(-1);
    for (int i=0; i<s.size(); i++){
        if (s[i] == ' ') spaces.push_back(i);
    }
    spaces.push_back(s.size());
    long ans = 1;
    for (int i=1; i<spaces.size(); i++){
        int f[26] = {0};
        for (int j=spaces[i-1]+1; j<spaces[i]; j++) f[s[j]-97]++;
        int n = spaces[i]-spaces[i-1]-1;
        for (int j=0; j<26; j++){
            ans = (ans*C(n,f[j]))%M;
            n-=f[j];
        }
    }
    return ans;
}

int main(){
    cout<<countAnagrams("too hot")<<endl;
    cout<<countAnagrams("aa")<<endl;
}