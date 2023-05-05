#include <bits/stdc++.h>
using namespace std;

int gcd(int &a, int &b)
{
  if (a == 0)
    return b;
  return gcd(b % a, a);
}

int gcd_of_vector(vector<int> &arr){
	int result = arr[0];
	for (int i = 1; i < arr.size(); i++)
	{
		result = gcd(arr[i], result);
		if(result == 1) return 1;
	}
	return result;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int T; cin>>T;
	while(T--){
		int n; cin>>n;
		vector<int> A(n);
		for (int i=0; i<n; i++) cin>>A[i];
		int g = gcd_of_vector(A);
		for (auto x:A) cout<<x/gcd(g,x)<<" ";
		cout<<endl;
	}
}