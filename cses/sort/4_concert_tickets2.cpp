#include <bits/stdc++.h>
using namespace std;

int main(){
	int nt,nc;
	cin>>nt>>nc;
	multiset<int> t;
    int x;
	for(int i=0; i<nt; i++){ cin>>x; t.insert(x);}
    multiset<int>::iterator i;
    while(nc--){
        cin>>x;
        i = t.lower_bound(x);
        if (i == t.end()) cout<<-1<<"\n";
        else{
            cout<<*i<<"\n";
            t.erase(i);
        }
    }
}