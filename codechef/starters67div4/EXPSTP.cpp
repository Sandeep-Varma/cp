#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int T; cin>>T;
	while(T--){
		int N; cin>>N;
		int x1,y1,x2,y2;
		cin>>x1>>y1>>x2>>y2;
		cout<<min(abs(x2-x1)+abs(y2-y1),min(min(x1,N+1-x1),min(y1,N+1-y1))+min(min(x2,N+1-x2),min(y2,N+1-y2)))<<endl;
	}
}