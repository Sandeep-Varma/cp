#include <iostream>
#include <set>
using namespace std;

int main()
{
    int N;
    cin>>N;
    int n;
    for (int i=0; i<N; i++)
    {
        cin>>n;
        multiset<int> A;
        int x;
        for (int j=0; j<n; j++)
        {
            cin>>x;
            A.insert(x);
        }
        x = -1;
        for (auto y: A)
        {
            if (A.count(y) >= 3)
            {
                x = y;
                break;
            }
        }
        cout<<x<<endl;
    }
}