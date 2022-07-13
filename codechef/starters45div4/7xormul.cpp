#include <bits/stdc++.h>
using namespace std;

vector<bool> boolean(int a, int n){
	if (n == 1) return vector<bool>{((a%2)?true:false)};
	vector<bool> v = boolean(a/2,n-1);
	v.push_back(((a%2)?true:false));
	return v;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T;
	cin>>T;
	while(T--){
		int n,a,b;
		cin>>n>>a>>b;
		// cout<<n<<" "<<a<<" "<<b<<endl;
		vector<bool> A = boolean(a,n);
		// for (auto x:A) cout<<x<<" "; cout<<endl;
		vector<bool> B = boolean(b,n);
		// for (auto x:B) cout<<x<<" "; cout<<endl;
		vector<bool> C;
		bool x = 0;
		for (int i=0; i<n; i++){
			if (A[i] == B[i]) C.push_back(!(A[i]));
			else if (x) C.push_back(!(B[i]));
			else{
				C.push_back(!(A[i]));
				x = 1;
			}
		}
		// for (auto x:C) cout<<x<<" "; cout<<endl;
		int c = 0;
		int exp = n;
		while (exp--) c+=C[n-1-exp]*(int)pow(2,exp);
		cout<<c<<endl;
	}
}