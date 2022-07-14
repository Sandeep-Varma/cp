#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T;
	cin>>T;
	while(T--){
		int n,k; cin>>n>>k;
		map<int,int> a;
		int x;
		while(n--){
			cin>>x;
			a[x]++;
		}
		vector<int> b;
		for (auto y:a){
			if (y.second>=k) b.push_back(y.first);
		}
		if (b.size()==0) cout<<-1<<endl;
		else{
			int max=-1,temp_max=1;
			int low,temp_low=b[0];
			for (int i=1; i<b.size(); i++){
				if (b[i]-b[i-1]>1){
					if (temp_max>max){
						max=temp_max;
						low = temp_low;
					}
					temp_max = 1;
					temp_low = b[i];
				}
				else temp_max++;
			}
			if (temp_max>max){
				max=temp_max;
				low = temp_low;
			}
			cout<<low<<" "<<low+max-1<<endl;
		}
	}
}
