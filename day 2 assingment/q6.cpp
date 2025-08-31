#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter a,b,c:";
    cin>>a>>b>>c;
    if (a>=b) {
        if(a>=c)
            cout<<a<<" is the largest no.";
        else
            cout<<c<<" is the largest no.";
    }
    else if (b>=a) {
        if(b>=c)
            cout<<b<<" is the largest no.";
        else
            cout<<c<<" is the largest no.";
    }
    return 0;
}