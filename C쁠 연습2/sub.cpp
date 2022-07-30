#include <iostream>
#include <cstdlib>
#include"header.h"
using namespace std;

Point::Point(int temp1 = 0, int temp2=0) {
	x = temp1;
	y = temp2;
}
ostream& operator <<(ostream& os, Point& temp) {
	os << '['<<temp.x <<','<<temp.y<<']';
	return os;
}


PointArray::PointArray(int temp) {
	len = temp;
	arr = new Point[len];
}

Point& PointArray::operator[](int temp) {
	if (temp < 0 || temp>len) {
		cout << "¹üÀ§¸¦ ¹þ¾î³µ±º";
		exit(1);
	}
	return arr[temp];
}
int PointArray::getlen() {
	return len;
}
PointArray::~PointArray() {
	delete []arr;
}