#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int n; cin>>n;
	vector<vector<int>> v(n, vector<int>(3));
	for (int i=0; i<n; i++){
		cin>>v[i][0]>>v[i][1]; v[i][2] = i;
	}
	sort(v.begin(),v.end());
	vector<vector<bool>> a(2,vector<bool>(n,false));
	int i=-1, M = INT_MIN;
	for (int j=0; j<n; j++){
		if (v[j][1] <= M){
			a[0][v[i][2]] = 1;
			a[1][v[j][2]] = 1;
		}
		else{
			i = j;
			M = v[j][1];
		}
	}
	for (int j=0; j<n; j++){
		swap(v[j][0],v[j][1]);
		v[j][0] = -1*v[j][0];
		v[j][1] = -1*v[j][1];
	}
	sort(v.begin(),v.end());
	i=-1, M = INT_MIN;
	for (int j=0; j<n; j++){
		if (v[j][1] <= M){
			a[0][v[i][2]] = 1;
			a[1][v[j][2]] = 1;
		}
		else{
			i = j;
			M = v[j][1];
		}
	}
	for (auto x:a){
		for (auto y:x) cout<<y<<" ";
		cout<<endl;
	}
}