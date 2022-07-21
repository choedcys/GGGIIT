#include<iostream>
#include"header.h"
using namespace std;

int main() {
	Pair<int,int> a(10, 20);
	Pair<int, double> b(3, 4.5);
	Pair<double, int> c(6.7, 8);
	Pair<double, double> d(9.1, 2.3);

	cout << a.getfir() << " " << a.getsec() << endl;
	cout << b.getfir() << " " << b.getsec() << endl;
	cout << c.getfir() << " " << c.getsec() << endl;
	cout << d.getfir() << " " << d.getsec() << endl;
}