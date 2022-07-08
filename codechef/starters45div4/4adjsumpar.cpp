#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T;
	cin>>T;
	while(T--){
		int n; cin>>n;
		vector<int> v;
		int x;
		while(n--){ cin>>x; v.push_back(x);}
		cout<<((accumulate(v.begin(),v.end(),0)%2)?"NO":"YES")<<endl;
	}
}