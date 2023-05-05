#include <bits/stdc++.h>
using namespace std;

bool sort_ranges(vector<int> &v1, vector<int> &v2){
	return (v1[0] < v2[0]) || (v1[0] == v2[0] && v1[1] > v2[0]);
}

bool check(vector<int> &v1, vector<int> &v2){
	return (v1[0] <= v2[0]) && (v1[1] >= v2[1]);
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int n; cin>>n;
	vector<vector<int>> v(n,vector<int>(2));
	for (int i=0; i<n; i++) cin>>v[i][0]>>v[i][1];
	sort(v.begin(),v.end(),sort_ranges);
	for (auto x:v){
		for (auto y:x) cout<<y<<" ";
		cout<<endl;
	}
	vector<vector<bool>> a(2,vector<bool>(n,false));
	for (int i=0; i<n-1; i++){
		if (check(v[i],v[i+1])){
			a[0][i] = 1;
			a[1][i+1] = 1;
			if (v[i] == v[i+1]){
				a[1][i] = 1;
				a[0][i+1] = 1;
			}
		}
	}
	for (auto x:a){
		for (auto y:x) cout<<y<<" ";
		cout<<endl;
	}
}