#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int T; cin>>T;
	int N,X;
	while(T--){
		cin>>N>>X;
		cout<<(int)pow(2,X-N)<<endl;
	}
}