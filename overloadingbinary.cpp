//sep 14
//to add feet and inches
#include<iostream>
using namespace std;
class distance{
    int feet;
    int inches;
    public:
    void getData(){
        cout<<"Enter the value of feet and inches"<<endl;
        cin>>feet>>inches;
    }
    distance operator +(distance d2){
        distance d1;
        d1.feet=feet+d2.feet;
        d1.inches=inches+d2.inches;
        d1.feet=d1.feet+d1.inches/12;
        d1.inches=d1.inches%12;
        return d1;
    }
    void display(){
        cout<<"Feet="<<feet<<"Inches:"<<inches<<endl;
    }
};
int main(){
    distance d1,d2,d3;
    d1.getData();
    d2.getData();
    d3=d1+d2;
    cout<<"d1="<<d1.display()<<endl;
    cout<<"+"<<endl;
    cout<<"d2="<<d2.display()<<endl;
    cout<<"d3="<<d3.display();
    return 0;
    }