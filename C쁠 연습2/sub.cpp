#include <iostream>
#include"header.h"
using namespace std;


Date::Date(){}
Date::Date(int temp1, int temp2, int temp3):y(temp1),m(temp2),d(temp3) {
	cout << *this<<endl;
}
Date Date::operator++(int temp) {
	if (m == 12 || d == 31) {
		m = 1;
		d = 1;
		y += 1;
		return *this;
	}
	if (m == 2 || m == 4 || m == 6 || m == 9 || m == 11) {
		if (m == 2 && d == 28 || m ==2 && d == 29) {
			if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0) {
				if (d == 28) {
					d += 1;
					return *this;
				}
				else {
					d = 1;
					m += 3;
					return *this;
				}
			}
			else {
				d = 1;
				m = 3;
				return *this;
			}
		}
		else {
			if (d == 30) {
				d = 1;
				m += 1;
				return *this;
			}
			else {
				d += 1;
				return *this;
			}
		}
	}
	else {
		if (d == 31) {
			d = 1;
			m += 1;
			return *this;
		}
		else {
			d += 1;
			return *this;
		}
	}
}

Date Date::operator--(int temp) {
	if (m == 1 && d == 1) {
		d = 31;
		m = 12;
		y -= 1;
		return *this;
	}
	if (m == 2 || m == 4 || m == 6 || m == 9 || m == 11) {
		if (d == 1) {
			d = 30;
			m -= 1;
			return *this;
		}
		else {
			d -= 1;
			return *this;
		}
	}
	else {
		if (m == 3 && d == 1) {
			if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0) {
				d = 29;
				m -= 1;
				return *this;
			}
			else {
				d = 28;
				m -= 1;
				return *this;
			}
		}
		if (m == 2 && d == 29) {
			d -= 1;
			return *this;
		}
		else {
			if (d == 1) {
				d = 31;
				m -= 1;
				return *this;
			}
			else {
				d -= 1;
				return *this;
			}
		}
	}
}
ostream& operator<<(ostream& os, Date& temp) {
	os << temp.y << "³â " << temp.m << "¿ù " << temp.d << "ÀÏ ";
	return os;
}