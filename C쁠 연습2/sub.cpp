//18-10
#include <iostream>
#include"header.h"
using namespace std;

Shape::Shape(double temp1=0, double temp2=0, double temp3=0) {
	x = temp1;
	y = temp2;
	z = temp3;
}

Ellipse::Ellipse(double temp=0) :Shape(temp, 0, 0),area(temp* temp * 3.14) {}
void Ellipse::show() {
	cout << "타원" << endl << "면적: " << area<<endl;
}

Rectangle::Rectangle(double temp1 = 0, double temp2 = 0):Shape(temp1,temp2,0),area(temp1*temp2) {}
void Rectangle::show() {
	cout << "직사각형" << endl <<"면적: " << area<<endl;
}

Triangle::Triangle(double temp1 = 0, double temp2 = 0) :Shape(temp1, temp2, 0),area(temp1*temp2*0.5) {}
void Triangle::show() {
	cout << "삼각형" << endl <<"면적: "<< area << endl;
}

Sphere::Sphere(double temp = 0) :Shape(temp, 0, 0),vol(0.75*temp*temp*temp*3.14) {}
void Sphere::show() {
	cout << "구" << endl <<"체적: " << vol << endl;
}

Cube::Cube(double temp1 = 0, double temp2 = 0, double temp3 = 0):Shape(temp1,temp2,temp3),vol(temp1*temp2*temp3) {}
void Cube::show() {
	cout << "직육면체" << endl << "체적: " << vol << endl;
}

Cylinder::Cylinder(double temp1 = 0, double temp2 = 0) :Shape(temp1, temp2, 0),vol(temp1*temp1*3.14*temp2) {}
void Cylinder::show() {
	cout << "원기둥" << endl << "체적: " << vol << endl;
}
