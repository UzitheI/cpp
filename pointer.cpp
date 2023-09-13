//pointer is a data type which holds the address of other data types
#include<iostream>
using namespace std;
int main(){
    // int a=3;
    // int *b =&a;
    //here & is the address of the variable 
    //* is a derefercing operator
    // cout<<b<<endl;
    //the output of the program will give an output which is the address of a
    // thus a pointer points out the adress of the data if used with the ampercept

//address of the operator 

int a=3;
int* b=&a;
//here using only &a will also give the address of the operator and
//only using b will also give address
cout<<"the address of a is "<<&a<<endl;
cout<<"the address of a is "<<b<<endl;
//now to print the value 
cout<<"the value of a is "<<a<<endl;
    // DEREFERENCE OPERATOR
    // dereference operator is used to determine the statement 'value of '
    // thus by using the pointer while calculating the output we can calculate the value 
cout<<"the value of a is "<<*b<<endl;
    // cout<<"the value of in the address a is "<<*b<<endl;
    // return 0;
//pointers just store address and by using referencing and dereferencing we can calculate the value and address of the data type stored in the value
//c uses %u to store address and %d to print the value


//we can also make pointer to pointer, pointer to pointer can store the address of a pointer variable

int** d=&b;
cout<<"the address of b is "<<&b<<endl;




    }