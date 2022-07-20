#include<iostream>
#include"header.h"
using namespace std;

Time::Time():h(0),m(0) {}
Time::Time(int temp1, int temp2):h(temp1),m(temp2){}

ostream& operator<<(ostream& os, Time& temp) {
	os << temp.h << "½Ã°£ " << temp.m << "ºÐ" << endl;
	return os;
}
istream& operator>>(istream& is, Time& temp) {
	is >> temp.h >> temp.m;
	return is;
}
Time& operator+(Time&temp1, double temp2) {
	temp1.h += int(temp2);
	temp1.m += (temp2 - int(temp2)) * 60;
	if (temp1.m >= 60) {
		temp1.h++;
		temp1.m -= 60;
	}
	return temp1;
}
Time& operator+(double temp1, Time& temp2) {
	temp2.h += int(temp1);
	temp2.m += (temp1 - int(temp1)) * 60;
	if (temp2.m >= 60) {
		temp2.h++;
		temp2.m -= 60;
	}
	return temp2;
}
Time& operator+(Time& temp1, Time& temp2) {
	Time res;
	res.h = temp1.h + temp2.h;
	res.m = temp1.m + temp2.m;
	if (res.m >= 60) {
		res.h++;
		res.m -= 60;
	}
	return res;
}