//loops are iterative statements,,,which means they repeat themselves until a stopping condition is met 

#include<iostream>
using namespace std;
int main(){
    // int a=4;
    // int i=0;
    // while(i<a){
    //     cout<<i<<endl;
    //     i++;
    // }
    // return 0;


    int a=4;
    // int i=0;
    // do
    // {
    //     i++;
    // } while (i<a);

    //the difference between while and do while loop is if the condition is not met the program wouldn't run even once but that is not the case in do while loop,,,,do while loop always runs


    for(int i=0;i<a;i++){
        cout<<"The value of i is "<<i<<endl;

    }
    return 0;
    //this is one of the most used programs in cpp
    
    
}