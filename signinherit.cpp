// #include <iostream>
// using namespace std;
// class hero
// {
//     string *name;
//     int age;
//     string *location;

// public:
//     hero(string *n, int a, string *l)
//     {
//         name = n;
//         age = a;
//         location = l;
//     }
//     string *getname()
//     {

//         return name;
//     }
//     void display()
//     {
//         cout << "The name is " << name << endl;
//         cout << "The age is " << age << endl;
//         cout << "The location is " << location << endl;
//     }
// };
// class secondHero : public hero
// {
//     int phoneNumber;

// public:
//     secondHero(char *n, int a, string *l, int num) : hero(n, a, l)
//     {
//         phoneNumber = num;
//     }
//     void SSdisplay()
//     {
//         display();
//         cout << "Also, the phoneNumber of Second hero is " << phoneNumber << endl;
//     }
// };
// int main()
// {
//     secondHero fs("Steven", 34, "Norfolk", 9834234234);
//     fs.SSdisplay();
//     return 0;
// }