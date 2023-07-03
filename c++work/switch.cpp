#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"Enter your age:";
    cin>>age;
    switch(age){
        case 1:
        cout<<"You are 1 years old";
        break;
        case 2:
        cout<<"You are 2 years old";
        break;
        default:
        cout<<"YOu are gay";
        break;
    }
    return 0;
}
//switch is a conditional statement largely used where we can expect user input 


// break is required because if you dont put break it executes all the code below the case which we want to be executed

//there is no need to use break in default

