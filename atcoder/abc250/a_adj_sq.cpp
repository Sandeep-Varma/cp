#include <iostream>
using namespace std;

int main()
{
    int H,W,R,C;
    cin>>H>>W>>R>>C;
    int x = 0;
    if (R < H) x++;
    if (R > 1) x++;
    if (C < W) x++;
    if (C > 1) x++;
    cout<<x<<endl;
}