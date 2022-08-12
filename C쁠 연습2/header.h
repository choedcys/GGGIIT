#include<iostream>
using namespace std;

class Fraction {
	int up, down;
public:
	Fraction();
	Fraction(int temp1, int temp2);
	Fraction operator=(Fraction temp);
	Fraction operator+(Fraction temp);
	void display();
};