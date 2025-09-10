#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter a marks";
    cin>>a;
    if(a>90)
    cout<<"grade A";
    else if(a>=75)
    cout<<"grade B";
     else if(a>=50)
    cout<<"grade C";
    else
    cout<<"fail";
    return 0;
}