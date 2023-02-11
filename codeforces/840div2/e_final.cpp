#include <bits/stdc++.h>
using namespace std;

pair<int,int> func(int p){
	if (p == 0) return {0,0};
    vector<int> mem(p+1,INT_MAX);
    vector<vector<int>> s(p+1);
    mem[0] = 0;
    for (int i=1; i<=p; i++){
        int l = (1+sqrt((float)(8*i+1)))/2;
        for (int j=2; j<=l; j++){
            if (mem[i-(j*(j-1))/2]+j < mem[i]){
                mem[i] = mem[i-(j*(j-1))/2]+j;
                s[i] = s[i-(j*(j-1))/2];
                s[i].push_back(j);
            }
        }
    }
	int csum = 0;
    int ssum = 0;
	for (auto it:s[p]){
        // cout<<it<<" ";
        ssum += csum*it;
        csum += it;
	}
    // cout<<endl;
	return {csum,ssum};
}
 
int main(){
	int p; cin>>p;
	pair<int,int> ans = func(p);
	cout<<ans.first<<" "<<ans.second<<endl;
}