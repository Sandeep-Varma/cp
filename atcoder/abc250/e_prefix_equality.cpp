#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main(){
	int N,Q;
	cin>>N;
	vector<int> A,B;
	int x;
	for (int i=0; i<N; i++){ cin>>x; A.push_back(x);}
	for (int i=0; i<N; i++){ cin>>x; B.push_back(x);}
	cin>>Q;
	int y;
	for (int i=0; i<Q; i++){
		cin>>x>>y;
		set<int> sA;
		set<int> sB;
		for (auto z=A.begin(); z!=A.begin()+x; z++){ sA.insert(*z);}
		for (auto z=B.begin(); z!=B.begin()+y; z++){ sB.insert(*z);}
		if (sA==sB) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}