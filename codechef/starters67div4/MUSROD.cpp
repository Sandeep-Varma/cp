#include <bits/stdc++.h>
using namespace std;

int main(){
    int T; cin >> T;
    while(T--){
        int N; cin >> N;
        vector<vector<int>> A(N,vector<int>(2));
        for (int i = 0; i < N; i++) cin >> A[i][0];
        for (int i = 0; i < N; i++) cin >> A[i][1];
        vector<int> B(N);
        for (int i = 0; i < N; i++) B[i] = A[i][0] * A[i][1];
        sort(B.begin(),B.end());
        int ans = 0;
        for (int i = 0; i < N; i++) ans += abs(B[i] - A[i][0]);
        cout << ans << endl;
    }
}