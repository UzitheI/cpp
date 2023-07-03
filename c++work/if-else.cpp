#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"Enter your age:";
    cin>>age;
    if(age<18){
        cout<<"You cant get your license"<<endl;
    }
    else{
        cout<<"YOu can get your license"<<endl;
    }
    return 0;
}