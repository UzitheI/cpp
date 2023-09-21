#include<iostream>
using namespace std;
template <class T>
T abs(T n){
    return (n<0)? -n:n;
    // if n is less than 0, it is a negative number, then -n can be written as n
}
int main(){
    int int1=3;
    int int2=-3;
    double d1=-3;
    long l1=-2;
    cout<<"The absolute value of int 1"<<abs(int1)<<endl;
    cout<<"The absolute value of int 2"<<abs(int2)<<endl;
    cout<<"The absolute value of d1"<<abs(d1)<<endl;
    cout<<"The absolute value of l1"<<abs(l1)<<endl;
    return 0;
}