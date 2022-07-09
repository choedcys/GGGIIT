#include<iostream>
#include"header.h"
using namespace std;

int main() {
	Shape* arr[3];
	arr[0] = new Oval("Circle", 2, 3,3,5);
	arr[1] = new Rect("Rectangle", 3, 4,3,3);
	arr[2] = new Tria("Triangle", 5, 6,2,2);
	arr[0]->draw();
	arr[1]->draw();
	arr[2]->draw();
}