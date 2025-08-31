#include<iostream>
using namespace std;
int main(){
    char ch;
    cin>>ch;
    switch (ch)
    {
    case 97:
    case 101:
    case 105:
    case 111:
    case 117:
    case 65:
    case 69:
    case 73:
    case 79:
    case 85:
        cout<<"vowel";
        break;
    default:
        cout<<"consonant";
        break;
    }
}