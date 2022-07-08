//18-6
//#include<iostream>
//using namespace std;
//
//class Shape {
//protected:
//	string name; // 도형의 이름 
//	int width, height; //도형에 내접하는 사각형의 너비와 높이
//public:
//	Shape(string n = "", int w = 0, int h = 0) {
//		name = n;
//		width = w;
//		height = h;
//	}
//	virtual double getArea() { return 0; }
//	string getName() { return name; }
//};
//
//class Oval : public Shape{
//
//};
//class Rect : public Shape {
//
//};
//class Tria : public Shape {
//
//};


//18-4
#include<iostream>
using namespace std;

class HomeApp {
protected:
	int pr;
	string name;
	string mk;
public:
	virtual void title() = 0;
};

class TV :public HomeApp{
	int size;
public:
	TV(string temp1, int temp2, int temp3, string temp4);
	void title();
};
class Refgr :public HomeApp{
public:
	Refgr(string temp1, int temp2, string temp3);
	void title();
};