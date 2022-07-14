#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T;
	cin>>T;
	while(T--){
		int n,k; cin>>n>>k;
		multiset<int> a;
		int x;
		while(n--){
			cin>>x;
			a.insert(x);
		}
		vector<int> b;
		for (auto y:a){
			if (a.count(y)>=k) b.push_back(y);
		}
		if (b.size()==0) cout<<-1<<endl;
		else{
		int low = b[0], high = b[0];
		int temp_low, temp_high, j;
		for(int i=0; i<b.size();){
			temp_low = b[i];
			j=i;
			if (i!=b.size()-1){
			while(++j){
				if (b[j]-b[j-1]>1){
					temp_high = b[j-1];
					break;
				}
				else if (j+1 >= b.size()){
					j++;
					temp_high = b[j-1];
					break;
				}
			}
			}
			else temp_high = b[j];
			if (temp_high-temp_low>high-low){
				low = temp_low;
				high = temp_high;
			}
			i=j;
		}
		cout<<low<<" "<<high<<endl;
		}
	}
}
