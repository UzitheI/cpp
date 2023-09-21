#include<iostream>
using namespace std;
class comp{
    int a,b;
    public:
    void getdata(){
        cin>>a>>b;
    }
    comp operator +(int){
        comp t,obj;
        t.a=a+obj.a;
        t.b=b+obj.b;
        return (t);

    }
    void display(){
        cout<<t.a<<"+"<<t.b<<endl;
    }
};
int main(){
    
}