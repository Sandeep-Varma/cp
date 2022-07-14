#include <iostream>
using namespace std;

int main(){
	int T;
	cin>>T;
	for (int tc=0; tc<T; tc++){
		int n,m; cin>>n>>m;
		bool a[n*m];
		int r[n]={};
		bool c[m]={}; int nc = 0;
		char x;
		for (int i=0; i<n*m; i++){
			cin>>x;
			a[i] = ((x=='1')?true:false);
			int count = 0;
			bool y = c[m-1];
			for(int j=m-1; j>0; j--){
				c[j] = c[j-1];
				// if (c[j]) count++;
			}
			c[0] = ((x=='1') || y);
			nc+=(((!y)&&(x=='1'))?1:0);
			count+=nc;
			for (int j=0; j<(i/m); j++){
				r[j]+=((a[i-j*m])?1:0)-((a[i-(j+1)*m])?1:0);
				if (r[j]>0) count++;
			}
			r[i/m]+=((a[i%m])?1:0);
			if (r[i/m]>0) count++;
			cout<<count<<" ";
		}
		cout<<endl;
	}
}