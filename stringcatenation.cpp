#include<iostream>  
#include<string.h>
using namespace std;  
  
class string1  
{  
    char str[20]; 
public:  
    void input() 
    {  
        cout<<"Enter your string: ";  
        cin.getline(str,20);  
    }  
    void display() 
    {  
        cout<<"string: "<<str;  
    }  
    string1 operator+(string1 s)    
    {  
        string1 obj;  
        strcat(str,s.str);  
        strcpy(obj.str,str);  
        return obj;  
    }  
};  
int main()  
{  
    string1 str1,str2,str3;  
    str1.input();  
    str2.input();  
    str3=str1+str2;  
    str3.display();   
    return 0;
}   