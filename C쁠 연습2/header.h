#include<iostream>
using namespace std;
class Point {
private:
	int xpos, ypos;
public:
	Point();
	Point(int temp1, int temp2);
	friend ostream& operator<<(ostream& os, Point t);
	friend istream& operator>>(istream& is, Point &t);
};


