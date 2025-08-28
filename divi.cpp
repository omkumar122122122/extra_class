#include<iostream>
using namespace std;
int main(){
      int a,b,c;
    cout<<"enter a no.";
    cin>>a;
    c=a%5;
    b=a%11;
    cout<<b<<c;
    if(c==0&&b==0)
    cout<<"it is divisible by both 5 and 11";
    else
     cout<<"it is not divisible by both 5 and 11";

          return 0;
}