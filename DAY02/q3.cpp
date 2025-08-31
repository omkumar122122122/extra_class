#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter marks:- ";
    cin>>a;
    if(a>=90){

        cout<<a<<" Grade A";
    }
    else if(a>=75){
        cout<<a<<" Grade B";
    }
     else if(a>=50){
        cout<<a<<" Grade C";
    }
    else{
        cout<<a<<" Fail";
    }
return 0;
}