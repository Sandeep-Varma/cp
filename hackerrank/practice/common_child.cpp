#include <bits/stdc++.h>
using namespace std;

int commonChild_approach1(string s1, string s2) {
    // int a[s1.size()+1][s2.size()+1];
    // using above statement causes segmentation fault when s1 and s2 are very long.
    // So, whenever large arrays are required use malloc
    int **a = (int**)malloc(sizeof(int*)*(s1.size()+1));
    for (int i=0; i<=s1.size(); i++){
        a[i] = (int*)malloc(sizeof(int)*(s2.size()+1));
        a[i][0] = 0;
    }
    for (int j=0; j<=s2.size(); j++) a[0][j] = 0;
    for (int i=1; i<=s1.size(); i++){
        for (int j=1; j<=s2.size(); j++){
            a[i][j] = max(max(a[i-1][j],a[i][j-1]),a[i-1][j-1]+(s1[i-1] == s2[j-1]));
        }
    }
    for (int i=0; i<=s1.size(); i++){
        free(a[i]);
    }
    free(a);
    return a[s1.size()][s2.size()];
}

int commonChild_approach2(string s1, string s2) {
    // In approach 1, we have used a lot of memory
    // Instead, we can store only two rows
    // At any instance (i,j), we need only ith and (i-1)th rows
    int a[2][s2.size()+1];
    // furthur, if even the above is causing seg fault, we can create it like this:
    // int *a[2];
    // a[0] = (int*)malloc(sizeof(int)*(s2.size()+1));
    // a[1] = (int*)malloc(sizeof(int)*(s2.size()+1));
    for (int i=0; i<2; i++) a[i][0] = 0;
    for (int j=0; j<=s2.size(); j++) a[0][j] = 0;
    for (int i=1; i<=s1.size(); i++){
        for (int j=1; j<=s2.size(); j++){
            a[i%2][j] = max(max(a[(i-1)%2][j],a[i%2][j-1]),a[(i-1)%2][j-1]+(s1[i-1] == s2[j-1]));
        }
    }
    return a[s1.size()%2][s2.size()];
}

int main(){
    string s1,s2;
    cin>>s1>>s2;
    cout<<commonChild_approach2(s1,s2)<<endl;
}
