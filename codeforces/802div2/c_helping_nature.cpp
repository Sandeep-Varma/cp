#include <iostream>
#include <vector>
using namespace std;
#define int long long
int count(int n, int* a, bool left, bool right){
	if (n == 0) return 0;
	int min = a[0];
	vector<int> mins = {0};
	for (int i=1; i<n; i++) {
		if (a[i] < a[mins[0]]){
			min = a[i];
			mins.clear();
			mins.push_back(i);
		}
		else if (a[i] == a[mins[0]]) mins.push_back(i);
	}
	int ans = ((min>0)?min:-min);
	if (!(left || right)) ans*=3;
	for (int i=0; i<n; i++) { a[i]-=min;}
	ans+=count(mins[0],&a[0],left,0);
	for (int i=1; i<mins.size(); i++) { ans+=count(mins[i]-mins[i-1]-1,&a[mins[i-1]+1],0,0);}
	ans+=count(n-mins[mins.size()-1]-1,&a[mins[mins.size()-1]+1],0,right);
	return ans;
}

int32_t main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T;
	cin>>T;
	while(T--){
		int n; cin>>n;
		int a[n];
		for (int i=0; i<n; i++){ cin>>a[i];}
		cout<<count(n,&a[0],1,1)<<endl;
	}
}