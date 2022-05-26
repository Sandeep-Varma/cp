#include <iostream>
#include <set>
using namespace std;

int main()
{
    int n;
    cin>>n;
    set<int> A;
    int x;
    for (int i=0; i<n; i++){ cin>>x; A.insert(x);}
    auto last = A.end(); last--;
    if (*last == *A.begin())
    {
        cout<<"NO"<<endl;
        return 0;
    }
    for (auto x: A)
    {
        if (x != *A.begin())
        {
            cout<<x<<endl;
            return 0;
        }
    }
}