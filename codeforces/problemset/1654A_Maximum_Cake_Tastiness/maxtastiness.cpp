#include <iostream>
using namespace std;

int maxtaste (int* A, int n)
{
    int M=0,M2=0;
    for (int i=0;i<n;i++)
    {
        if (A[i] > M)
        {
            M2 = M;
            M = A[i];
        }
        else if (A[i] > M2) M2 = A[i];
    }
    return M+M2;
}

int main()
{
    int N,n;
    cin>>N;
    for (int i=0; i<N; i++)
    {
        cin>>n;
        int A[n];
        for (int j=0; j<n; j++)
        {
            cin>>A[j];
        }
        cout<<maxtaste(A,n)<<endl;
    }
}