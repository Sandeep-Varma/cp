#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,m,k;
	cin>>n>>m>>k;
	vector<int> a(n);
	vector<int> A(m);
	for(int i=0; i<n; i++){ cin>>a[i];}
	for(int i=0; i<m; i++){ cin>>A[i];}
	sort(a.begin(),a.end());
	sort(A.begin(),A.end());
	int ans = 0;
    int i=0, j=0;
    while(i<n && j<m){
        if (a[i]-A[j]>=-k){
            if (a[i]-A[j]<=k){
                ans++;
                i++;
                j++;
            }
            else j++;
        }
        else i++;
    }
	cout<<ans<<endl;
}