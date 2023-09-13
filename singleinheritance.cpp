#include<iostream>
using namespace std;
class student{
    char* name;
    int age;
    public:
    student(char* n, int a){
        name=n;
        age=a;
    }
    char* getName(){
        return name;
    }
    void display(){
        cout<<"Name::"<<name<<endl;
        cout<<"Age::"<<age<<endl;
    }
};
class foreignStudent:public student{
    char *country;
    public:
    foreignStudent(char* n,int a,char* c):student(n,a){
        country=c;
    }
    void displayForeign(){
        display();
        cout<<"Country::"<<country<<endl;
    }

};

int main(){
    foreignStudent fs("Steven",21,"UK");
    fs.displayForeign();
    return 0;
}