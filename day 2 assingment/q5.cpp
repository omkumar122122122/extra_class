#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int r,s,l,b;
    cout<<"Enter radius:";
    cin>>r;
    cout<<"Enter edge:";
    cin>>s;
    cout<<"Enter length and breadth:";
    cin>>l>>b;
    cout<<"Area of circles = "<<22.0/7.0*pow(r,2)<<endl;
    cout<<"Area of square = "<<pow(s,2)<<endl;
    cout<<"Area of rectangle = "<<l*b<<endl;

    return 0;
}