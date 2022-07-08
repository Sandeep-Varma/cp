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
	auto i = a.begin(), j = a.end()-1;
	while(j!=i-1){
		if (j == i || *i+*j>max){
			j--;
			count++;
		}
		else{
			j--; i++;
			count++;
		}
	}
	cout<<count<<endl;
}