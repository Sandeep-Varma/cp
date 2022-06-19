#include <iostream>
#include <vector>
using namespace std;

int main(){
	string p; cin>>p;
	vector<string> P1,P2;
	P1.push_back(p);
	vector<int> blanks;
	for (int i=0; i<48; i++){ if (p[i]=='?') blanks.push_back(i);}
	for (int i=0; i<blanks.size(); i++){
		for (auto y:P1){
			string z = y;
			z[blanks[i]] = 'D';
			P2.push_back(z);
			z[blanks[i]] = 'R';
			P2.push_back(z);
			z[blanks[i]] = 'U';
			P2.push_back(z);
			z[blanks[i]] = 'L';
			P2.push_back(z);
		}
		P1.clear();
		i++; if (i>=blanks.size()) break;
		for (auto y:P2){
			string z = y;
			z[blanks[i]] = 'D';
			P1.push_back(z);
			z[blanks[i]] = 'R';
			P1.push_back(z);
			z[blanks[i]] = 'U';
			P1.push_back(z);
			z[blanks[i]] = 'L';
			P1.push_back(z);
		}
		P2.clear();
		cout<<"Hi1"<<endl;
	}
	cout<<"Hi2"<<endl;
	if (P1.size() == 0) P1 = P2;
	for (auto x:P1){
		if ((x[0] == 'D' || x[0] == 'R') &&
			(x[1] == 'D' || x[1] == 'R') &&
			(x[-1]== 'D' || x[-1]== 'L')){
				P2.push_back(x);
		} 
	}
	cout<<P2.size()<<endl;
}