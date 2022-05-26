#include <iostream>
#include <set>
#include <vector>
using namespace std;
 
int main(){
	int N,n,q;
	cin>>N;
	while(N--){
		cin>>n>>q;
		multiset<int> A;
		int y;
		for (int i=0; i<n; i++){
			cin>>y;
			A.insert(y);
		}
		vector<int> S;
		int s=0;
		for (auto x=A.end(); x!=A.begin();){
			x--;
			S.push_back(*x+s);
			s=S.back();
		}
		while(q--){
			cin>>y;
			int i;
			for (i=0; i<S.size(); i++){
				if (S[i]>=y){
					cout<<i+1<<endl;
					break;
				}
			}
			if (i==S.size()) cout<<-1<<endl;
		}
	}
}