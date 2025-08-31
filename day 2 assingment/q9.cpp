#include<iostream>
using namespace std;
int main(){
    int marks;
    cin>>marks;
    if(marks>100 || marks<0){
        cout<<"Invalid marks";
    }
    else if(marks>=80 && marks<=100){
        cout<<"A+";
    }
    else if(marks>=60 && marks<80){
        cout<<"A";
    }
    else if(marks>=45 && marks<60){
        cout<<"B";
    }
    else if(marks>=33 && marks<45){
        cout<<"C";
    }
    else
        cout<<"Fail";
    return 0;
}