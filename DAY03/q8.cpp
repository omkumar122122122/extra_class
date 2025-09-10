#include<iostream>
using namespace std;
int main(){
    int n,p=0,num,rem;
    cin>>n;
    num=n;
    while(n!=0){
        rem=n%10;
        p=p*10+rem;
        n/=10;
    }
    
    if(p==num){
        cout<<"Palindrome";
    }
    else
        cout<<"Not a palindrome";
        
    return 0;
}