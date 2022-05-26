#include <iostream>
#include <set>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int inp[n];
    for (int i=0; i<n; i++)
    {
        cin>>inp[i];
    }
    set<int> A;
    int x;
    for (int i=n-1; i>=0; i--)
    {
        A.insert(inp[i]);
    }
    cout<<A.size()<<endl;
    string s = "";
    for (int i=n-1; i>=0; i--)
    {
        if (A.count(inp[i]) == 1)
        {
            s = to_string(inp[i]) + " " + s;
            A.erase(inp[i]);
        }
    }
    cout<<s<<endl;
}