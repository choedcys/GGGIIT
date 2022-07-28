#include <iostream>
#include"header.h"
#include <cstdlib>
using namespace std;

newArr::newArr(int temp):len(temp) {
	arr = new int[temp];
}
int& newArr::operator[](int temp) {
	if (temp<0 || temp > len) {
		cout << "Index Outof Range" << endl;
		exit(1);
	}
	return arr[temp];
}