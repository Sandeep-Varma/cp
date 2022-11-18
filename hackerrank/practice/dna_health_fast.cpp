#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n; cin>>n;
	unordered_map<string,vector<int>> p;
	int h[n];
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
		unordered_map<string,long long int> m;
		long long int temp;
		for (int l=1; l<=s.size(); l++){
			for (int x=0; x<=s.size()-l; x++){
				if (m.count(s.substr(x,l))) score+=m[s.substr(x,l)];
				else{
					temp = 0;
					for (auto z:p[s.substr(x,l)]){
						if (z>=i && z<=j) temp+=h[z];
					}
					score+=temp;
					m[s.substr(x,l)]=temp;
				}
			}
		}
		mi = min(mi,score);
		ma = max(ma,score);
	}
	cout<<mi<<" "<<ma<<endl;
	return 0;
}