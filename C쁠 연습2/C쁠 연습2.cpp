#include<iostream>
#include"header.h"
using namespace std;

template<typename T>
void Mswap(T& temp1, T& temp2) {
	T temp;
	temp = temp1;
	temp1 = temp2;
	temp2 = temp;
}

int main() {
	int a = 4, b = 5;
	double c = 0.3, d = 12.5;
	char* name1 = "apple";
	char* name2 = "banana";
	Circle donut(5), pizza(20);
	cout << "===교환 전" << endl;
	cout << "a= " << a << "   " << "b= " << b << endl;
	cout << "c= " << c << "   " << "d= " << d << endl;
	cout << "name1= " << name1 << "   " << "name2= " << name2 << endl;
	cout << "donut= " <<donut << "   " << "pizza= " << pizza << endl;
	Mswap(a, b);
	Mswap(c, d);
	Mswap(name1, name2);
	Mswap(donut, pizza);
	cout << "===교환 후" << endl;
	cout << "a= " << a << "   " << "b= " << b << endl;
	cout << "c= " << c << "   " << "d= " << d << endl;
	cout << "name1= " << name1 << "   " << "name2= " << name2 << endl;
	cout << "donut= " << donut << "   " << "pizza= " << pizza << endl;
}