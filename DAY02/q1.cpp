#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter any no :- ";
    cin>>a;
    if(a>0){

        cout<<a<<" is +ev";
    }
    else if(a<0){
        cout<<a<<" is -ev";
    }
    else{
        cout<<a<<" is zero";
    }
    cout<<"";
return 0;
}