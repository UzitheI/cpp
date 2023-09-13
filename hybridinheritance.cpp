//here i will try to include multilevel with multiple 
#include<iostream>
using namespace std;
class one{
    int a;
    public:
    one(){
        cout<<"First Constructor Called"<<endl;
    }
    void getone(){
        cout<<"Enter the value of a:";
        cin>>a;
    }
    void displayone(){
        cout<<"The value of a is"<<a<<endl;
    }

};
class two:public one{
    int b;
    public:
    two(){
        cout<<"Second Constructor Called"<<endl;
    }
    void gettwo(){
        cout<<"Enter the value of b:"<<endl;
        cin>>b;
    }
    void displaytwo(){
        displayone();
        cout<<"The value of b is"<<b<<endl;
    }

};

class three:public two{
    int c;
    public:
    three(){
        cout<<"Third Constructor Called"<<endl;
    }
    void getthree(){
        cout<<"Enter the value of c:"<<endl;
        cin>>c;
    }
    void displaythree(){
        displaytwo();
        cout<<"The value of c is"<<c<<endl;
    }
};

class four:public three,one{
    int d;
    public:
    four(){
        cout<<"Final constructor called"<<endl;
    }
    void getfour(){
        cout<<"Enter the value of d:"<<endl;
        cin>>d;
    }
    void displayfour(){
        displaythree();
        three::displayone();
        cout<<"The value of d is "<<d<<endl;
    }
};

int main(){
      four obj;
    obj.three::getone();
    obj.gettwo();
    obj.getthree();
    obj.getfour();

    obj.displayfour();

    return 0;
}