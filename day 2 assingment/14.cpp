#include<iostream>
using namespace std;
int main(){
    int marks;
    int grade;
    cin>>marks;
    if (marks>=80 && marks <=100){
        grade = 1;
    }
    else if(marks>=40 && marks<80){
        grade = 2;
    }
    else if(marks>=0 && marks<40){
        grade = 3;
    }
    switch (grade)
    {
    case 1:
        cout<<"Distinction";
        break;
    case 2:
        cout<<"Pass";
        break;
    case 3:
        cout<<"Fail";
        break;
    default:
        cout<<"Invalid marks";
        break;
    }
    return 0;
}