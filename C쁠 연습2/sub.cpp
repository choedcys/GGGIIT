#include<iostream>
#include"header.h"
using namespace std;

Shape::Shape(string temp1 = "", int temp2 = 0, int temp3 = 0, int temp4 =0, int temp5=0) {
	name = temp1;
	width = temp2;
	height = temp3;
	x = temp4;
	y = temp5;
}
string Shape:: getName() { return name; }
void Shape::move(int temp1, int temp2) {
	x += temp1;
	y += temp2;
}


Oval::Oval(string temp1, int temp2, int temp3,int temp4, int temp5) :Shape(temp1,temp2,temp3,temp4,temp5) {}
double Oval::getArea() {
	return (width - height)*(width-height)*3.14;
}
void Oval::draw() {
	int temp1 = 2, temp2 = 1;
	cout << name << "Draw" << endl;
	cout << "시작점: (" << x<<"," << y << ")"<<endl;
	cout << "면적: " << getArea()<<endl;
	cout << "이동점: (" << temp1 << "," << temp2 << ")"<<endl;
	move(temp1, temp2);
	cout << "최종점: (" << x << "," << y << ")"<<endl;
}

Rect::Rect(string temp1, int temp2, int temp3, int temp4, int temp5) :Shape(temp1, temp2, temp3, temp4, temp5) {

}
double Rect::getArea() {
	return width * height;
}
void Rect::draw() {
	int temp1 = 2, temp2 = 1;
	cout << name << "Draw" << endl;
	cout << "시작점: (" << x << "," << y << ")" << endl;
	cout << "면적: " << getArea() << endl;
	cout << "이동점: (" << temp1 << "," << temp2 << ")" << endl;
	move(temp1, temp2);
	cout << "최종점: (" << x << "," << y << ")" << endl;
}

Tria::Tria(string temp1, int temp2, int temp3, int temp4, int temp5) :Shape(temp1, temp2, temp3, temp4, temp5) {

}
double Tria::getArea() { 
	return 0.5 * width * height;
}
void Tria::draw() {
	int temp1 = 2, temp2 = 1;
	cout << name << "Draw" << endl;
	cout << "시작점: (" << x << "," << y << ")"<<endl;
	cout << "면적: " << getArea() << endl;
	cout << "이동점: (" << temp1 << "," << temp2 << ")" << endl;
	move(temp1, temp2);
	cout << "최종점: (" << x << "," << y << ")" << endl;
}