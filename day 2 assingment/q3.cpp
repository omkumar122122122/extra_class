#include<iostream>
using namespace std;
int main(){
    float C,F;
    cout<<"Enter temperature in fahrenheit";
    cin>>F;
    cout<<"Enter temperature in celcius ";
    cin>>C;
    cout<<F<<" F = "<<(5.0/9.0)*(F-32)<<"C"<<endl;
    cout<<C<<" C = "<<(5.0/5.0)*C+32<<"F";
    return 0;
}