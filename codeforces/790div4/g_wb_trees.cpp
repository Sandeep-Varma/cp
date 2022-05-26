#include <bits/stdc++.h>
using namespace std;

struct node{
	bool c; // 0 if W and 1 if B
	vector<int> children;
};

int balance(node *v, int index, int &ans){
	int b = 0;
	for (auto x:v[index].children){
		b+=balance(v,x,ans);
	}
	b+=((v[index].c)?1:-1);
	if (b==0) ans++;
	return b;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T;
	cin>>T;
	while(T--){
		int n; cin>>n;
		node v[n+1];
		int x;
		for (int i=2; i<n+1; i++){
			cin>>x; v[x].children.push_back(i);
		}
		char chr;
		for (int i=1; i<n+1; i++){
			cin>>chr;
			if (chr == 'W') v[i].c = 0;
			else v[i].c = 1;
		}
		int ans = 0;
		int b = balance(&v[0],1,ans);
		cout<<ans<<endl;
	}
}
