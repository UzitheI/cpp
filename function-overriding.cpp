//when a certain base class and a certain derived class has the same function then the function is said to be overridden
#include<iostream>
using namespace std;
class parent{
    int a;
    public:
    void showa(){
        cout<<"Enter the element of a:"<<endl;
        cin>>a;
    }
};
class child:public parent{
    int b=8;
    public:
    void showa(){
        cout<<"B is a higher number so the value of b should be "<<b<<endl;
    }
};

int main(){
    child child_derived;
    child_derived.showa();//the value printed here is teh value at child class which shows that the function a has been overridden
    return 0;
}
