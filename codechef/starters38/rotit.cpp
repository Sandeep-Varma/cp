#include <bits/stdc++.h>
using namespace std;

bool Equal(int arr1[], int arr2[], int n){
    for (int i = 0; i < n; i++){
        if (arr1[i] != arr2[i]) return false;
	}
    return true;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T;
	cin>>T;
	while(T--){
		int n;
		cin>>n;
		int a[n],b[n];
		int x;
		for (int i=0; i<n; i++){ cin>>x; a[i]=x;}
		for (int i=0; i<n; i++){ cin>>x; b[i]=x;}
		int k,l;
		for (k=0; k<n; k++){
			l=0;
			while(++l){
				if (!(a[k+l-1]==b[l-1])){
					l--;
					break;
				}
			}
			if (Equal(a,&b[l],k) && Equal(&a[l+k],&b[l+k],n-l-k)){
				cout<<k<<endl;
				break;
			}
		}
		if (k == n) cout<<-1<<endl;
	}
}
