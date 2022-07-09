//18-6
#include<iostream>
using namespace std;

class Shape {
protected:
	string name;
	int width, height;
	int x, y;
public:
	Shape(string temp1, int temp2, int temp3, int temp4, int temp5);
	virtual double getArea() = 0;
	string getName();
	virtual void draw()=0;
	void move(int temp1, int temp2);
};

class Oval : public Shape{
public:
	Oval(string temp1, int temp2, int temp3, int temp4, int temp5);
	double getArea();
	void draw();
};
class Rect : public Shape {
public:
	Rect(string temp1, int temp2, int temp3, int temp4, int temp5);
	double getArea();
	void draw();
};
class Tria : public Shape {
public:
	Tria(string temp1, int temp2, int temp3, int temp4, int temp5);
	double getArea();
	void draw();
};
