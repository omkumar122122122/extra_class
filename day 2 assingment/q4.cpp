#include<iostream>
#include<math.h>
using namespace std;
int main(){
    float P,R,T,CI,SI,A;
    cout<<"Enter principle, rate, time:";
    cin>>P>>R>>T;
    SI=P*R*T/100;
    A=P*pow((1+R/100),T);
    CI=A-P;
    cout<<SI<<endl;
    cout<<CI;
    return 0;
}