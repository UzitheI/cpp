#include <iostream>
using namespace std;
const float MeterToFloat=3.280833;
class Distance {
	int feets;
	float inches;
	public:
	Distance()  {
		feets=0;
		inches=0.0;
	}
	Distance(float numofmeters) {
		float feetsinfloat= MeterToFloat * numofmeters;
		feets=int(feetsinfloat);
		inches=12*(feetsinfloat-feets);
	}
	void displaydist()   {
		cout<<"Converted Value is: "<<feets<<"\' feets and "<<inches<<'\"'<<" inches.";
	}
};
int main() {
	cout <<"Float to distance conversion."<<endl;
	float meters;
	cout<<"Enter values in meter:";
	cin >>meters;
	Distance distance = meters;
	distance.displaydist();
}