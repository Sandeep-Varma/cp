#include <iostream>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T;
	cin>>T;
	while(T--){
		int N,M; cin>>N>>M;
		int y;
		int max1,max2;
		cin>>y; N--;
		max2 = y;
		cin>>y; N--;
		if (y>=max2) max1 = y;
		else{
			max1 = max2;
			max2 = y;
		}
		while(N--){
			cin>>y;
			if (y>max2){
				if (y>max1){
					max2 = max1;
					max1 = y;
				}
				else if (y<max1) max2 = y;
			}
		}
		int max_sum1 = 2*max1;
		int max_sum2 = max2 + max1 + (max2-max1)%M + M;
		if (max_sum1 >= max_sum2) cout<<max_sum1<<endl;
		else cout<<max_sum2<<endl;
	}
}