//struct helps to store different datatype in the same place
//union stores different data types but it also helps with memory management as it doesnot assign sum of bytes but the maximum bytes and the storage spaces is shared
//enum is how you assign numerical values to your items 


#include<iostream>
using namespace std;
// union money;
    // typedef struct employee{
    //     //so what typedef does is, it allows employee to be written as Ujjwal and Ganesh
    //     int age;
    //     char group ;
    //     float marks;
    //     long double eid ;
    //     char s[100];
    // }Ujjwal,Ganesh;



    //union is used for better memory management as union stores the data type in the same memory address, it deletes the previous value that is stored inside the program

//     typedef union money{
//         int total=34;
//         float balance =3.4;
//         long double worktime=34343.434;
//     }m1;
int main(){
//     // cout<<"enter employer's age"<<endl;
//     // cin>>Ujjwal.age;
//     // cout<<"the age of ujjwal is "<<Ujjwal.age<<endl;
//     cout<<m1.total<<endl;
enum meal{breakfast,lunch,dinner};
meal m1=breakfast;
cout<<m1<<endl;
//it assigns the inner items with a number that gives that information about what we are dealing with
cout<<breakfast;
cout<<lunch;
cout<<dinner;


    return 0;





}