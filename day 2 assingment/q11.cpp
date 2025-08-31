#include<iostream>
using namespace std;
int main(){
    float a,b;
    char op;
    cin>>a;
    cin>>op;
    cin>>b;
    switch(op){
        case 43: 
            cout<<a+b;
            break;
        case 45:
            cout<<a-b;
            break;
        case 42: 
            cout<<a*b;
            break;
        case 47:
            cout<<a/b;
            break;
        default:
            cout<<"Undefined operator";
    }
    return 0;
}