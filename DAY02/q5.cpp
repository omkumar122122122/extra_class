#include<iostream>
using namespace std;
int main(){
    int a,b;
    char c;
    cout<<"enter expresion";
    cin>>a>>c>>b;
    switch(c){
        case '+':
        cout<<a+b;
        break;
          case '-':
        cout<<a-b;
        break;
          case '/':
        cout<<a/b;
        break;
          case '*':
        cout<<a*b;
        break;
        default:
        cout<<"enter the correct op";

    }
}