#include <bits/stdc++.h>
using namespace std;

bool exp2(string s){
    if (s[0] == '0') return 0;
    if (s == "1") return 1;
    if (int(s[j])%2) return 0;
    for (int i=0; i<s.size(); i++){
        
    }
}

int twoTwo(string &s){
    int ans = 0;
    for (int i=0; i<s.size(); i++){
        for (int j=i; j<s.size(); j++){
            if (exp2(s)) ans++;
        }
    }
    return ans;
}

int main(){
    int T; cin>>T:
    string s;
    while(T--){
        cin>>s;
        cout<<twoTwo(s)<<endl;
    }
}