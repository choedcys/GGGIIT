#include<iostream>
#include"header.h"
using namespace std;

Circle::Circle() :radius(0) {}
Circle::Circle(int temp):radius(temp){}
int Circle::getRadius() { return radius; }

ostream& operator<<(ostream& os, Circle& temp) {
	os << temp.radius;
	return os;
}

template<typename T>
void Mswap(T& temp1, T& temp2) {
	T temp;
	temp = temp1;
	temp1 = temp2;
	temp2 = temp;
}