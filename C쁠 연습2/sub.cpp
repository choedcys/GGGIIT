#include <iostream>
#include"header.h"
using namespace std;


Fraction::Fraction(){}
Fraction::Fraction(int temp1, int temp2):up(temp1),down(temp2){}

Fraction Fraction::operator=(Fraction temp) {
	this->up = temp.up;
	this->down = temp.down;
	return *this;
}
Fraction Fraction:: operator+(Fraction temp) {
	Fraction res;
	res.up = this->up + temp.up;
	res.down = this->down;
	return res;
}
void Fraction::display() {
	cout << up << "/" << down << endl;
}