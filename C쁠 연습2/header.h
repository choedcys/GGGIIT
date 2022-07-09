//18-6,7,8
#include<iostream>
using namespace std;

class Shape {
protected:
	string name;
	int width, height;
	int x, y;
public:
	Shape(string temp1, int temp2, int temp3, int temp4, int temp5);
	virtual double getArea()=0;
	string getName();
	virtual void draw()=0;
	void move(int temp1, int temp2);
	void setOrigin(int temp1, int temp2);
	void setWidth(int temp);
	void setHeight(int temp);
	virtual Shape* createShape() = 0;
};

class Oval : public Shape{
public:
	Oval(string temp1, int temp2, int temp3, int temp4, int temp5);
	double getArea();
	void draw();
	Shape* createShape();
};
class Rect : public Shape {
public:
	Rect(string temp1, int temp2, int temp3, int temp4, int temp5);
	double getArea();
	void draw();
	Shape* createShape();
};
class Tria : public Shape {
public:
	Tria(string temp1, int temp2, int temp3, int temp4, int temp5);
	double getArea();
	void draw();
	Shape* createShape();
};