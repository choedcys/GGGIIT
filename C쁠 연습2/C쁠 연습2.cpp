//18-4
#include<iostream>
#include<iomanip>
#include"header.h"
using namespace std;

int main() {
	HomeApp *arr[5];
	arr[0] = new TV("SER56e3", 7, 3000000, "Samsung");
	arr[1] = new Refgr("LRV452RT", 45000000, "LG");
	arr[2] = new TV("LZ45V5e", 7, 2000000, "LG");
	arr[3] = new TV("SA587e4", 7, 1000000, "Samsung");
	arr[4] = new Refgr("SER52e7", 30000000, "Samsung");
	cout << "name" << setw(10) << "size" << setw(10) << "price" << setw(10) << "maker" << endl;
	for (int i = 0; i < 5; i++) {
		arr[i]->title();
	}
}