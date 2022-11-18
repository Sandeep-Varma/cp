#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n; cin>>n;
	unordered_map<string,vector<int>> p;
	unordered_map<int,int> h;
	string s;
	for (int i=0; i<n; i++){
		cin>>s;
		p[s].push_back(i);
	}
	int health;
	for (int i=0; i<n; i++){
		cin>>health;
		h[i] = health;
	}
	long long int ma = INT_MIN, mi = INT_MAX, score;
	int T; cin>>T;
	int i,j;
	while(T--){
		cin>>i>>j>>s;
		score = 0;
		for (int x=0; x<s.size(); x++){
			for (int y=x; y<s.size(); y++){
				for (auto z:p[s.substr(x,y-x+1)]){
					if (z>=i && z<=j) score+=h[z];
				}
			}
		}
		mi = min(mi,score);
		ma = max(ma,score);
	}
	cout<<mi<<" "<<ma<<endl;
	return 0;
}