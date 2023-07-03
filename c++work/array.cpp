#include<iostream>
using namespace std;
int main(){
    int a[4]={1,2,3,4};
    //working with arrays
    //an array is the collection of similar data types, if you create an array callend int a[10], then every data it stores is an integer
    // cout<<a[2]<<endl;
    // cout<<a[3]<<endl;
    // for(i=0;i<4;i++){
    //     cout<<a[i]<<endl;
    // }

    // now using while loop
    // while(i<4){
    //     cout<<a[i]<<endl;
    //     i++;
    // }

    //now using do while loop 
    //     do
    //     {
    //         cout<<a[i]<<endl;
    //         i++;
    //     } while (i<4);
        
    // return 0;
    //dont forget that when using do while loops and while loops, you must use increment operators




    //now using pointers in arrays
    // cout<<a<<endl;
    //only name can be used to get the address of the first array block(very cool)
    // int *p;
    // p=a;
    //this is giving the first address
    // p++;
    //this increments by 1, so it is currently in 2
    // cout<<*p+1<<endl;
    // cout<<*p+2<<endl;

    //basic formula for pointer arithmetic
    // address(new) =address(current)+ i*size of data type 

//pointers and arrays
int i;
int *p=a;
// cout<<"the value of marks 0 is "<<*p<<endl;
    cout<<"the value of a[i] is "<<*(p+1)<<endl;

return 0;
    }




