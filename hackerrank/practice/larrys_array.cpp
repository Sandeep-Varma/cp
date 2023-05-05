#include<bits/stdc++.h>
using namespace std;

void r(vector<int> &A, int i){
    int x = A[i];
    A[i] = A[i+1];
    A[i+1] = A[i+2];
    A[i+2] = x;
    return;
}

string larrysArray(vector<int> A) {
    vector<int> B = A;
    sort(B.begin(),B.end());
    while (B.size()){
        if (B.size() < 2) return "YES";
        if (B.size() == 2){
            if (A[0]<A[1]) return "YES";
            else return "NO";
        }
        int x = *(B.end()-1);
        int i;
        for (i=B.size()-1; i>=0; i--) if (x == A[i]) break;
        if ((B.size()-1-i) == 1){
            r(A,i-1);
            r(A,i-1);
            i++;
        }
        if ((B.size()-1-i)%2){
            r(A,i);
            r(A,i);
            i++;
        }
        for (;i<B.size()-2;i+=2) r(A,i);
        B.pop_back();
    }
    return "YES";
}

int main(){
    int t;
    cin >> t;
    for (int t_itr = 0; t_itr < t; t_itr++) {
        int n;
        cin >> n;
        vector<int> A(n);
        for (int i = 0; i < n; i++) {
            cin >> A[i];
        }
        string result = larrysArray(A);
        cout << result << endl;
    }
}