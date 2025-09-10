#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
    int max=10,min=1;
    int a= (rand() % (max - min + 1)) + min;
    int b,i=0,g=0;
    cout<<"welcome to our game \n";
    cout<<"this is a number guessing game \n";
    cout<<"";
    cout<<"you have 15 chance to guess a number \n";
    cout<<"if you guess right you won\nelse you will lost the game\nhint : the number is between 1 to 10\n";
    do
    {
         int a= (rand() % (max - min + 1)) + min;
        cout<<"guess the number\n";
        cin>>b;
        if(a==b){
            cout<<"you won\n";
            g=1;
        }
        else{
             cout<<"OOps the no. was  "<<a;
            cout<<"try again\n ";
        }
        i++;
    } while (g==0);
    if(g==0)
    cout<<"you lost the game \n Restart";
    
    return 0;
}