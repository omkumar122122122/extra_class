#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter no. to print table";
    cin>>a;
    for(int i=1;i<11;i++){
        cout<<i<<"*"<<a<<"="<<i*a<<endl;
    }

    return 0;
}