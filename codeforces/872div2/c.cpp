#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int T; cin>>T;
	while(T--){
		int n,m; cin>>n>>m;
		int l=0,r=0;
		vector<int> s1;
		s1.push_back(-1);
		s1.push_back(m);
		int x;
		for (int i=0; i<n; i++){
			cin>>x;
			if (x == -1) l++;
			else if (x == -2) r++;
			else s1.push_back(x-1);
		}
		set<int> s(s1.begin(),s1.end());
		int comm = s1.size()-s.size();
		vector<int> p(s.begin(),s.end());
		x=0;
		int i=0;
		while(l>0){
			if (i == p.size()-1) break;
			if (l<p[i+1]-p[i]-1) break;
			else{
				l-=p[i+1]-p[i]-1;
				i++;
			}
		}
		vector<int> p2 = vector<int>(p.begin()+i,p.end());
		int j=p2.size()-1;
		while(r>0){
			if (j == 0) break;
			if (r<p2[j]-p2[j-1]-1) break;
			else{
				r-=p2[j]-p2[j-1]-1;
				j--;
			}
		}
		if (p[i]>=p2[j]) cout<<m<<endl;
		else if (p2[j] == p[i+1]){
			cout<<max(l,r)+p[i]+1+m-p2[j]<<endl;
		}
		else cout<<n-comm<<endl;
	}
}