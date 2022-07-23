#include<iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle();
	Circle(int temp);
	int getRadius();
	friend ostream& operator<<(ostream& os, Circle& temp);
};