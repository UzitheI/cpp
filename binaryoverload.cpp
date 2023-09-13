#include <iostream>
using namespace std;
 
class Box {
   double length;    
   double breadth;     
   double height;      
   
   public:
 
   double getVolume(void) {
      return length * breadth * height;
   }
   
   void dimensions( double len, double bre,double hei ) {
      length = len;
      breadth = bre;
      height = hei;
   }
   Box operator+(const Box& b) {
      Box box;
      box.length = this->length + b.length;
      box.breadth = this->breadth + b.breadth;
      box.height = this->height + b.height;
      return box;
   }
};
int main() {
   Box Box1;               
   Box Box2;               
   Box Box3;                   
   double volume = 0.0;     
 
  
   Box1.dimensions(5.0,6.0,7.0);
 

   Box2.dimensions(12.0,13.0,10.0); 

 
   // volume of box 1
   volume = Box1.getVolume();
   cout << "Volume of Box1 : " << volume <<endl;
 
   // volume of box 2
   volume = Box2.getVolume();
   cout << "Volume of Box2 : " << volume <<endl;
 
   // Add two object as follows:
   Box3 = Box1 + Box2;
 
   // volume of box 3
   volume = Box3.getVolume();
   cout << "Volume of Box3 : " << volume <<endl;
}
 