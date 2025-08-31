#include<iostream>
using namespace std;
int main(){
      int a,b,c;
    cout<<"enter 3 three no.";
    cin>>a>>b>>c;
    if(a>b&&a>c)
    cout<<a<<"a is greater";
    else if(b>a&&b>c)
    cout<<b<<"b is greater";
     else if(c>b&&c>a)
    cout<<c<<"c is greater";

    
    return 0;
}