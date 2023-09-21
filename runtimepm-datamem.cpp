//when we choose the appropriate function in polymorphism during run-time, it is called run-time polymorphism or late binding.
//we can make virtual functions in base class to do runtime polymorphism


#include<iostream>
using namespace std;
class parent{
    int a;
    public:
    parent(){a=1;}
    virtual void display(){//virtual rakhena vaney the pointer of the base class will only point to this non virtual display even if it is using child's address
        cout<<"Parent base class"<<a<<endl;

    }

};
class child1:public parent{
    int b;
    public:
    child1(){b=2;}
    void display(){
        cout<<"child1 base class"<<b<<endl;
    }

};
class child2:public parent{
    int c;
    public:
    child2(){c=3;}
    void display(){
        cout<<"2chlid base class "<<c<<endl;

    }
};
int main(){
    parent* baseptr;
    parent p;
    baseptr=&p;
    baseptr->display();
    child1 c1;
    child2 c2;
    baseptr=&c1;
    baseptr->display();
    baseptr=&c2;
    baseptr->display();
}
