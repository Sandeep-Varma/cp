#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	int n; cin>>n;
	vector<int> a;
	int x;
	for (int i=0; i<n; i++){ cin>>x; a.push_back(x);}
	sort(a.begin(),a.end());
	int median = ((long long)a[(n-1)/2]+a[n/2])/2;
	long long cost = 0;
	for (int i=0; i<n; i++){ cost+=((a[i]-median>0)?a[i]-median:median-a[i]);}
	cout<<cost<<endl;
}