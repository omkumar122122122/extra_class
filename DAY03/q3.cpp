#include<iostream>
using namespace std;
int main(){
    int a,b,n=1;
    char op;
    string ask;
    do
    {
        cout<<"Enter a:";
        cin>>a;
        cout<<"Enter operator:";
        cin>>op;
        cout<<"Enter b:";
        cin>>b;
        if(op='+')
            cout<<a+b<<endl;
        else if(op='-')
            cout<<a-b<<endl;
        else if(op='*')
            cout<<a*b<<endl;
        else if(op='/')
            cout<<a/b<<endl;
        cout<<"Do you want to exit";
        cin>>ask;
        if(ask=="yes" || ask=="Yes" || ask=="YES")
            n=0;
        else
            n=1;

    } while (n!=0);
    
    return 0;
}