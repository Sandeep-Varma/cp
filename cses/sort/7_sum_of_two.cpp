#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	int n, sum;
	cin>>n>>sum;
	vector<vector<int>> a;
	int x;
	for (int i=1; i<=n; i++){ cin>>x; a.push_back({x,i});}
	sort(a.begin(),a.end());
	int i = 0, j = n-1;
	while(i<j){
		if (a[i][0]+a[j][0]>sum) j--;
		else if (a[i][0]+a[j][0]<sum) i++;
		else{
			cout<<a[i][1]<<" "<<a[j][1]<<endl;
			break;
		}
	}
	if (i == j) cout<<"IMPOSSIBLE"<<endl;
}