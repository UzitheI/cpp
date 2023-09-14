#include<iostream>
using namespace std;
class increase{
    int a,b;
    public:
    increase(){}
    void getvalue(){
        cout<<"Enter the value of a and b:"<<endl;
        cin>>a>>b;
    }
    void operator++(){
        a++;
        b++;
    }
    void showvalue(){
        cout<<"The value is "<<a<<"and"<<b<<endl;
    }
};
int main(){
    increase inr;
    inr.getvalue();
    inr.showvalue();
    return 0;
}