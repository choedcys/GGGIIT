#include <iostream>
#include <cstdlib>
#include"header.h"
using namespace std;

IntArray::IntArray(int temp) :arrlen(temp) {
	arr = new int[temp];
}
int& IntArray:: operator[] (int idx) {
	if (idx < 0 || idx >= arrlen) {
		cout << "¹üÀ§¸¦¹þ¾î³µ½À´Ï´Ù" << endl;
		exit(1);
	}
	return arr[idx];
}
int IntArray:: getArrLen() {
	return arrlen;
}
IntArray::~IntArray() {
	delete[]arr;
}
