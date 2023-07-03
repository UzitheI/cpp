#include<iostream>
using namespace std;
int main(){
    int a=4;
    float b=5;
    short sa=9;
    string cro="Humpty Dumpty";
    //variables can start from letters and underscore,,,and also numbers cannot be used at the beginning while initializing a variable


    //camel case notation 
    int marksInMaths=83;
    cout<<marksInMaths;
    //camel case notation helps the computer with suggesting after a variable is once initialized
    // short a;//sabai vanda sano
    // int b;//mid sized
    // long c;//larger than int
    // long long d;//largest

// very case specific 
//simillarly for float 

float score=45.32;//least precision 
double score2=45.332;//mid level decimal point precision
long double score3=45.3423434;//high decimal point precision 

long  float hamilton=343.3433234;
cout<<hamilton;


//when we are writing a var that doesn't need to be changed ,then we use a constant

float const mike=343;
//used only when we want data to be not changed anytime


return 0;

}