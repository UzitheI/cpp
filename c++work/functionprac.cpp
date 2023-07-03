#include<iostream>
using namespace std;
int add(int,int);//function prototype
int main(){
    int a,b,c;
    cout<<"Enter the vlaue of a:";
    cin>>a;
    cout<<"Enter the value of b:";
    cin>>b;
    c=add(a,b);
    cout<<"The sum of 2 numbers is "<<c<<endl;
    return 0;
}
int add(int x,int y){
    int z;
    z=x+y;
    return z;
}