#include<iostream>
using namespace std;
template<class atype, class btype>
btype find(atype* array,atype value, btype size){
    for(btype j=0;j<size;j++){
        if(array[j]=value){
            return j;

        }
    }
    return static_cast<btype>(-1);
}