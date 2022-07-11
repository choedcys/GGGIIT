//18-12
#include<iostream>
#include"header.h"
using namespace std;

Calculator::Calculator(){}
GoodCalc::GoodCalc(){}
int GoodCalc::add(int a, int b) {
	return a + b;
}
int GoodCalc::subtract(int a, int b) {
	return a - b;
}
double GoodCalc::average(int a[], int size) {
	for (int i = 0; i < size-1; i++) {
		a[0] += a[i+1];
	}
	return a[0];
}