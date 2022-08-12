#include <iostream>
#include"header.h"
using namespace std;


int main()
{
	Fraction a(3, 8);
	Fraction b(1, 8);
	Fraction c;
	c = a + b;
	cout << "a = ";
	a.display();
	cout << "b = ";
	b.display();
	cout << "a + b = ";
	c.display();
	return 0;
}
