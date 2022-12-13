#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int T; cin>>T;
	while(T--){
		long long N,K;
		cin>>N>>K;
		if ((N*(N+1))/2>K){
			cout<<-1<<endl;
			continue;
		}
		for (int i=1; i<N; i++) cout<<1<<" ";
		cout<<K+1-((N*(N+1))/2)<<endl;
	}
}