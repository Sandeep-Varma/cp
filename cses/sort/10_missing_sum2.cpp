#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define int long long

int n;
vector<int> a;
vector<vector<bool>> subset;

int MissingSum()
{
	subset.push_back({});
	for (int i = 0; i <= n; i++) subset[0].push_back(true);
	int sum = 0;
	while(subset[sum++][n]){
		subset.push_back({});
		subset[sum].push_back(false);
		for (int i = 1; i <= n; i++){
			if (sum < a[i - 1]) subset[sum].push_back(subset[sum][i - 1]);
			else if (sum >= a[i - 1])
				subset[sum].push_back(subset[sum][i-1] || subset[sum-a[i-1]][i-1]);
		}
	}
	return sum-1;
}

int32_t main(){
	cin>>n;
	int x;
	for (int i=0; i<n; i++){ cin>>x; a.push_back(x);}
	cout<<MissingSum()<<endl;
}