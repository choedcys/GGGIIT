#include<iostream>
#include"header.h"
using namespace std;

Point::Point():xpos(0),ypos(0) {}
Point::Point(int temp1 = 0, int temp2 = 0) {
	xpos = temp1;
	ypos = temp2;
}
ostream& operator<<(ostream& os, Point t) {
	os << "[" << t.xpos << ", " << t.ypos << "]" << endl;
	return os;
}

istream& operator>>(istream& is, Point &t) {
	is >>t.xpos >> t.ypos;
	return is;
}