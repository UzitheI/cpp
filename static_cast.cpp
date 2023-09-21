#include<iostream>
using namespace std;
int main(){
    int a=1500000000;
    double b;
    int myvar=static_cast<double>(a);
    cout<<myvar<<endl;
    return 0;
}