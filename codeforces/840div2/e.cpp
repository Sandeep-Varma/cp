#include <bits/stdc++.h>
using namespace std;

vector<int> minLoops(int W, int n, int val[], int wt[])
{
	int dp[W+1];
	vector<vector<int>> s(W+1);
    memset(dp, 0, sizeof dp);
    for (int i=0; i<=W; i++){
		for (int j=0; j<n; j++){
			if (wt[j] <= i){
				// dp[i] = max(dp[i], dp[i-wt[j]] + val[j]);
				if (dp[i-wt[j]] + val[j] > dp[i]){
					dp[i] = dp[i-wt[j]] + val[j];
					s[i] = s[i-wt[j]];
					s[i].push_back(j+2);
				}
			}
		}
	}
    return s[W];
}

// vector<int> minLoops(int loops[], int m, int V){
//     int table[V + 1];
// 	vector<vector<int>> s(V+1);
// 	table[0] = 0;
//     for (int i = 1; i <= V; i++) table[i] = INT_MAX;
//     for (int i = 1; i <= V; i++) {
//         for (int j = 0; j < m; j++)
//             if (loops[j] <= i) {
//                 int sub_res = table[i - loops[j]];
//                 if (sub_res != INT_MAX && sub_res + 1 < table[i]){
// 					table[i] = sub_res + j+2;
// 					s[i] = s[i-loops[j]];
// 					s[i].push_back(j+2);
// 				}
//             }
//     }
//     return s[V];
// }

pair<int,int> func(int p){
	if (p == 0) return {0,0};
	int x = (1+sqrt((float)(8*p+1)))/2;
	int loops[x-1];
	int wts[x-1];
	for (int i=0; i<x-1; i++){
		loops[i] = ((i+2)*(i+1))/2;
		wts[i] = i+2;
	}
	vector<int> s = minLoops(p,x-1,loops,wts);
	int sum = accumulate(s.begin(),s.end(),0);
	int ssum = 0;
	for (auto it:s) ssum+=it*it;
	return {sum,(sum*sum-ssum)/2};
}

int main(){
	int p; cin>>p;
	pair<int,int> ans = func(p);
	cout<<ans.first<<" "<<ans.second<<endl;
}