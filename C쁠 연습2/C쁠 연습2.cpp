#include <iostream>
#include <cstdlib>
#include"header.h"
using namespace std;

int main() {
	PointArray a(3);
	a[0] = Point(3, 4);
	a[1] = Point(5, 6);
	a[2] = Point(7, 8);
	int i = 0;
	while (1) {
		if (i == 3)
			break;
		cout << a[i] << endl;
		i++;
	}
}