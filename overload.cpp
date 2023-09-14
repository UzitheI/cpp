//function overloading can be taken as an example of compile time polymorphism
#include<iostream>
using namespace std;
class element{
    int length,breadth,height;
    public:
    int fun(int l){
        length=l;
        cout<<"The length is "<<length<<endl;
    }
    int fun(int b,int h){
        breadth=b;
        height=h;
        cout<<"The breadth is "<<breadth<<" and the height is "<<height<<endl;

    }
    int fun(int l, int b,int h){
        length=l;
        breadth=b;
        height=h;
        cout<<l*b*h;
        return l*b*h;
    }
};
int main(){
    element e;
    int l,b,h;
    cout<<"enter the value of length, breadth and height"<<endl;
    cin>>l>>b>>h;
   e.fun(l);
   e.fun(b,h);
   e.fun(l,b,h);
   return 0;

}