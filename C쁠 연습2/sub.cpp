//18-4
#include<iostream>
#include<iomanip>
#include"header.h"
using namespace std;
TV::TV(string temp1, int temp2, int temp3, string temp4) {
	name = temp1;
	size = temp2;
	pr = temp3;
	mk = temp4;
}
void TV::title() {
	cout << name << setw(5) << size << setw(10)<< pr << setw(10) << mk<<endl;
}
Refgr::Refgr(string temp1, int temp2, string temp3) {
	name = temp1;
	pr = temp2;
	mk = temp3;
}
void Refgr::title() {
	cout << name << setw(5) << "   " << setw(10) << pr << setw(10) << mk << endl;
}