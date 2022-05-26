#include <iostream>
#include <deque>
using namespace std;

int main()
{
    int N;
    cin>>N;
    int n;
    for (int i=0; i<N; i++)
    {
        cin>>n;
        deque<int> A;
        int x;
        for (int i=0; i<n; i++)
        {
            cin>>x;
            if (x < A[0]) A.push_front(x);
            else A.push_back(x);
        }
        for (auto x: A)
        {
            cout<<x<<" ";
        }
        cout<<endl;
    }
}