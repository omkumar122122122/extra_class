#include<iostream>
using namespace std;
int main(){
      int a,s,rev=0;
      cout<<"enter no. to reverce";
      cin>>a;
      while(a>0){
        s=a%10;
        a=a/10;
        rev=(rev*10)+s;

      }
      cout<<rev;
      return 0;
    }