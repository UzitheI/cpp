#include <iostream>
using namespace std;
const float MeterToFloat=3.280833;
class Distance {
	int feet;
	float inches;
	public:
	Distance(){
		feet=0;
		inches=0.0;
	}
	Distance(int ft, float in) {
		feet=ft;
		inches=in;
	}
	operator float() {
		float feetinfractions=inches/12;
		feetinfractions+=float(feet);
		return (feetinfractions/MeterToFloat);
	}
};
int main() {
	int feet;
	float inches;
	cout <<"Enter distance in Feet and Inches.";
	cout<<"\nFeet:";
	cin>>feet;
	cout<<"Inches:";
	cin>>inches;
	Distance dist(feet, inches);
	float meters=dist;//conversion occurs here
	cout<<"Converted Distance in Meters is: "<< meters;
}