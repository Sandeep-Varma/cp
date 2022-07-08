#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	int n, max, count = 0;
	cin>>n>>max;
	vector<int> a;
	int x;
	while(n--){ cin>>x; a.push_back(x);}
	sort(a.begin(),a.end());
	auto i = upper_bound(a.begin(),a.end()-1,max-*(a.end()-1));
	while(a.size()>0){
		if (a.size() == 1){
			a.erase(a.begin());
			count++;
		}
		else if (i == a.begin()){
			a.pop_back();
			i = upper_bound(a.begin(),a.end()-1,max-*(a.end()-1));
			count++;
		}
		else{
			a.pop_back();
			a.erase(i-1);
			i = upper_bound(a.begin(),a.end()-1,max-*(a.end()-1));
			count++;
		}
	}
	cout<<count<<endl;
}