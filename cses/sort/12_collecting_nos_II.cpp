#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,m; cin>>n>>m;
	vector<int> a(n+1), p(n+2);
	p[0] = INT_MAX; p[n+1] = INT_MAX;
	for (int i=1; i<=n; i++){
		int x; cin>>x;
        a[i] = x;
		p[x] = i;
	}
	int ans = 0;
	for (int i=1; i<=n; i++) if (p[i] < p[i-1]) ans++;
	while(m--){
        int x,y; cin>>x>>y;
        swap(a[x],a[y]);
        int temp_x = x;
        x = a[y]; y = a[temp_x];
        if (x>y) swap(x,y);
        ans -= (p[x] < p[x-1]);
        ans -= (p[x+1] < p[x]);
        if (y != x+1) ans -= (p[y] < p[y-1]);
        ans -= (p[y+1] < p[y]);
        swap(p[x],p[y]);
        ans += (p[x] < p[x-1]);
        ans += (p[x+1] < p[x]);
        if (y != x+1) ans += (p[y] < p[y-1]);
        ans += (p[y+1] < p[y]);
        cout<<ans<<endl;
    }
}