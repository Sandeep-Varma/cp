#include <iostream>
using namespace std;

int main(){
    int a,b,c;
    cin>>a>>b>>c;
    char s;
    for (int i=0; i<a*b; i++){
        if (i%(2*b)<b) s='.';
        else s='#';
        for (int j=0; j<a; j++){
            for (int k=0; k<c; k++){
                cout<<s;
            }
            s=((s=='#')?'.':'#');
        }
        cout<<endl;
    }
}