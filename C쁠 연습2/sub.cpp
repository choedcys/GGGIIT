#include <iostream>
#include"header.h"
using namespace std;


Date::Date(){}
Date::Date(int temp1, int temp2, int temp3):y(temp1),m(temp2),d(temp3) {
	arrange();
}
void Date::arrange(){
	tot = 0;
	for (int i = 1; i < y; i++) {
		if (i % 4 == 0 && i % 100 != 0 || i % 400 == 0)
			tot +=366;
		else {
			tot += 365;
		}
	}
	for (int i = 1; i < m; i++) {
		if (i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12)
			tot += 31;
		else {
			if (i == 2) {
				if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0)
					tot += 29;
				else
					tot += 28;
			}
			else {
				tot += 30;
			}
		}
	}
	tot += d-1;
	cout << tot<<endl;
}
void Date::dearrange() {
	y = 1;
	m = 1;
	d = 1;
	while (1) {
		if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0)
			tot -= 366;
		else
			tot -= 365;
		y++;
		if ((tot < 366) && (y % 4 == 0 && y % 100 != 0) || y % 400 == 0)
			break;
		if (tot < 365)
			break;
	}
	while (1) {
		if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12) {
			if (tot < 31)
				break;
			tot -= 31;
		}
		else if (m == 2) {
			if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0) {
				if (tot < 29)
					break;
				tot -= 29;
			}
			else {
				if (tot < 28)
					break;
				tot -= 28;
			}
		}
		else {
			if (tot < 30)
				break;
			tot -= 30;
		}
		m++;
	}
	d += tot;
}
Date Date::operator++(int temp) {
	++tot;
	return *this;
}

Date Date::operator--(int temp) {
	--tot;
	return *this;
}
ostream& operator<<(ostream& os, Date& temp) {
	temp.dearrange();
	os << temp.y << "³â " << temp.m << "¿ù " << temp.d << "ÀÏ ";
	temp.arrange();
	return os;
}