#include <iostream>
#include <cstdlib>
#include"header.h"
using namespace std;

int main() {
	PointArray a(3);
	a[0] = new Point(3, 4);
	a[1] = new Point(5, 6);
	a[2] = new Point(7, 8);
	int i = 0;
	while (1) {
		if (i == 3)
			break;
		cout << *(a[i]) << endl;
		i++;
	}
	delete a[0];
	delete a[1];
	delete a[2];
}