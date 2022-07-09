//18-10
#include <iostream>
#include"header.h"
using namespace std;

int main() {
	Shape *arr[6];
	arr[0] = new Ellipse(0.7073);
	arr[1] = new Rectangle(3, 4);
	arr[2] = new Triangle(3,10);
	arr[3] = new Sphere(9);
	arr[4] = new Cube(10,12,11);
	arr[5] = new Cylinder(23, 10);
	for (int i = 0; i < 6; i++) {
		arr[i]->show();
		cout << endl;
	}
}