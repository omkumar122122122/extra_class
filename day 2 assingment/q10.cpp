#include<iostream>
using namespace std;
int main(){
    char ch;
    cin>>ch;
    if (ch==97 || ch==101 || ch==105 || ch==111 || ch==117)
    {
        cout<<"vowel";
    }
    else if (ch==65 || ch==69 || ch==73 || ch==79 || ch==85)
    {
        cout<<"vowel";
    }
    else 
        cout<<"consonant";
    return 0;
    
}