#include<iostream>
#include"header.h"
using namespace std;

Time::Time(int temp1=0, int temp2=0) : h(temp1), m(temp2) {}
Time Time::operator+(Time temp) {
	temp.h += this->h;
	temp.m += this->m;
	if (temp.m >= 60) {
		temp.m -= 60;
		temp.h++;
	}
	return temp;
}
Time Time::operator++(int n) {
	this->m++;
	if (this->m >= 60) {
		this->m -= 60;
		this->h++;
	}
	return *this;
}
std::ostream& operator<<(ostream& os, Time temp) {
	os << ": " << temp.h << "½Ã°£ " << temp.m << "ºÐ" << endl;
	return os;
}
