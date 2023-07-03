/*we have many types of operators in cpp
1.Arithmetic
2.logical
3.relational
4.bitwise:and or not


using typecasting when divison,we may need to print the value of divison in terms of float but we may not need to change the data type of any other operations for that we can simply use typecast*/
#include<iostream>
using namespace std;
int main(){ 


int a,b;
cout<<"Enter the value of a:";
cin>>a;
cout<<"Enter the value of b:";
cin>>b;
cout<<"The sum of a and b is "<<a+b<<endl;
cout<<"The sum of a and b is "<<a-b<<endl;
cout<<"The sum of a and b is "<<a*b<<endl;
cout<<"The sum of a and b is "<<(float)a/b<<endl;
return 0;
}
//here at the end we used a simple(float) which made it possible to show the answer in terms of decimal, this is a prime example of typecast

//with typecasting we must also learn about operator precedence,ie operators have to be given preference before one another,,,they are pretty similar to BODMAS rule followed in mathematics,,,,but we can manually select the precedence with brackets




