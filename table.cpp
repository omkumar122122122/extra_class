#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"enter no.to print table";
    cin>>n;
    for(int i=1;i<11;i++){
        m=n*i;
        cout<<i<<"*"<<n<<"="<<m<<endl;
    }
    
          return 0;
}