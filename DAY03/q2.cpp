#include<iostream>
using namespace std;
int main(){
    int n,num=0,rem;
    cin>>n;
    while(n!=0){
        rem=n%10;
        num=num*10+rem;
        n/=10;
    }
    cout<<num;
    return 0;
}