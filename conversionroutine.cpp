#include<iostream>
using namespace std;
class one{
    string a="kanye west";
    public:
string getstring(){
    return (a);

}
void adisplay(){
    cout<<a<<endl;
}

};
class two{
    string b;
    public:
    void operator =(one a){
        b=a.getstring();
    }
    void display(){
        cout<<b<<endl;
    }
};

int main(){
    one o;
    two t;
    o.adisplay();
    t.display();
    return 0;
}


