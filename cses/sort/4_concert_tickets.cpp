#include <bits/stdc++.h>
using namespace std;
 
int main(){
	int nt,nc;
	cin>>nt>>nc;
	vector<int> t(nt);
	for(int i=0; i<nt; i++){ cin>>t[i];}
	sort(t.begin(),t.end());
    int x;
    vector<int>::iterator i;
    while(nc--){
        cin>>x;
        i = upper_bound(t.begin(),t.end(),x);
        if (i == t.begin()) cout<<-1<<endl;
        else{
            cout<<*(i-1)<<endl;
            t.erase(i-1);
        }
    }
}