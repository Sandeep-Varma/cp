#include <bits/stdc++.h>
using namespace std;

vector<string> v;
vector<string> words;
multiset<pair<int,pair<int,int>>> hor, ver;

bool solve(){
    if (words.size() == 0) return true;
    string w = *(words.rbegin());
    int l = w.size();
    words.pop_back();
    for (auto it = hor.lower_bound({l,{-1,-1}}); it != hor.upper_bound({l,{10,10}}); it++){
        pair<int,pair<int,int>> blank = *it;
        string y = v[blank.second.first].substr(blank.second.second,blank.first);
        bool mismatch = false;
        for (int x=0; x<l; x++){
            if (y[x] != '-') if (w[x] != y[x]){
                mismatch = true; break;
            }
        }
        if (mismatch) continue;
        hor.erase(it);
        for (int x=0; x<l; x++)
            v[blank.second.first][blank.second.second+x] = w[x];
        if (solve()) return true;
        hor.insert(blank);
        for (int x=0; x<l; x++)
            v[blank.second.first][blank.second.second+x] = y[x];
    }
    for (auto it = ver.lower_bound({l,{-1,-1}}); it != ver.upper_bound({l,{10,10}}); it++){
        pair<int,pair<int,int>> blank = *it;
        string y(l,'-');
        for (int x=0; x<l; x++)
            y[x] = v[blank.second.first+x][blank.second.second];
        bool mismatch = false;
        for (int x=0; x<l; x++){
            if (y[x] != '-') if (w[x] != y[x]){
                mismatch = true; break;
            }
        }
        if (mismatch) continue;
        ver.erase(it);
        for (int x=0; x<l; x++)
            v[blank.second.first+x][blank.second.second] = w[x];
        if (solve()) return true;
        ver.insert(blank);
        for (int x=0; x<l; x++)
            v[blank.second.first+x][blank.second.second] = y[x];
    }
    words.push_back(w);
    return false;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    v = vector<string>(10);
    for (int i=0; i<10; i++) cin>>v[i];
    string s; cin>>s;
    words = {};
    int i=s.find(';');
    while(i != -1){
        words.push_back(s.substr(0,i));
        s = s.substr(i+1,s.size()-i-1);
        i=s.find(';');
    }
    words.push_back(s);
    for (int i=0; i<10; i++){
        int j=0, k=0;
        while(j<10){
            j=v[i].find('-',k);
            if (j == -1) break;
            k=v[i].find('+',j);
            if (k == -1) k = 10;
            hor.insert({k-j,{i,j}});
        }
    }
    for (int j=0; j<10; j++){
        int i=0, k=0;
        while(i<10){
            for (i=k; i<10; i++) if (v[i][j] == '-') break;
            if (i == 10) break;
            for (k=i; k<10; k++) if (v[k][j] == '+') break;
            ver.insert({k-i,{i,j}});
        }
    }
    solve();
    for (int i=0; i<10; i++) cout<<v[i]<<endl;
}