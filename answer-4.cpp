#include<iostream>
#include<stdio.h>
using namespace std;

class Rectangle {
private:
	double length = 1;
	double width = 1;

public:
	float perimeter()
	{
		float temp = length + width ;
		temp += temp;
		return temp;
	}
	float area ()
	{
		return length * width;
	}
	int getLength() {
		return length;
	}
	void setLength(float a) {
		if (a >= 0.0 && a <= 20.0)
		{length = a;} else {
			cout << "please enter something vaild";
		}

	}
	int getWidth() {
		return width;
	}
	void setWidth(int a)
	{
		if (a >= 0.0 && a <= 20.0)
		{width = a;} else {
			cout << "please enter something vaild";
		}
	}
};
int main()
{

	float l,w;
	Rectangle rattta;
	cout<<"Enter length of the rectangle:";
	cin>>l;
	rattta.setLength(l);
	cout<<"Enter width of the rectangle:";
	cin>>w;
	rattta.setWidth(w);
	cout << "perimeter:";
	cout << rattta.perimeter() << "\n";
	cout << "Area:";
	cout << rattta.area() << "\n";


	return 0;
}
