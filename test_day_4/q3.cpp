#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter no.";
    cin>>a;
    switch(a){
        case 1: 
            cout<<"monday";
            break;
        case 2:
            cout<<"tuesday";
            break;
        case 3: 
            cout<<"wednesday";
            break;
        case 4:
            cout<<"thrusday";
            break;
             case 5:
            cout<<"friday";
            break;
             case 6:
            cout<<"saturday";
            break;
             case 7:
            cout<<"sunday";
            break;
        default:
            cout<<"Undefined input";
    }
    return 0;
}