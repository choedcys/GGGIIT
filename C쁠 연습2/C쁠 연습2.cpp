#include<iostream>
#include"header.h"
using namespace std;

void main()
{
	Time a(5, 50), b(3, 30), c(1,2);
	c = a + b;
	cout <<"a: " << a;
	cout << "b: " << b;
	cout << "c: " << c;
	a++;
	cout << "a: " << a;
}