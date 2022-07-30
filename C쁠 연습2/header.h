#include <iostream>
#include <cstdlib>
using namespace std;

class Point{
	int x, y;
public:
	Point(int temp1, int temp2);
	friend ostream& operator <<(ostream& os, Point& temp);
};

class PointArray {
	Point** arr;
	int len;
public:
	PointArray(int temp);
	Point*& operator[](int temp);
	PointArray& operator=(PointArray& temp);
	int getlen();
	~PointArray();
};