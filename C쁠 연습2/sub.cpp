#include <iostream>
#include"header.h"
using namespace std;


Time::Time(){}
Time::Time(int temp1, int temp2, int temp3):h(temp1),m(temp2),s(temp3){}
Time Time::operator+(int temp) {
	s += temp;
	arrange();
	return *this;
}
Time Time::operator-(int temp) {
	s -= temp;
	arrange();
	return *this;
}
bool Time::operator<(Time temp) {
	if (this->h < temp.h)
		return true;
	else if (this->h > temp.h)
		return false;
	else {
		if (this->m < temp.m)
			return true;
		else if (this->m > temp.m)
			return false;
		else {
			if (this->s < temp.s)
				return true;
			else
				return false;
		}
	}
}
bool Time::operator>(Time temp) {
	if (this->h > temp.h)
		return true;
	else if (this->h < temp.h)
		return false;
	else {
		if (this->m > temp.m)
			return true;
		else if (this->m < temp.m)
			return false;
		else {
			if (this->s > temp.s)
				return true;
			else
				return false;
		}
	}
}
bool Time::operator==(Time temp) {
	if (this->h == temp.h && this->m == temp.m && this->s == temp.s)
		return true;
	else
		return false;
}
bool Time::operator!=(Time temp) {
	if (this->h == temp.h && this->m == temp.m && this->s == temp.s)
		return false;
	else
		return true;
}
void Time::display() {
	cout << h << ":" << m << ":" << s << endl;
}
void Time::arrange() {
	if (s < 0) {
		while (s < 0) {
			s += 60;
			m--;
		}
	}
	if (s > 59) {
		m += s / 60;
		s = s % 60;
	}
	if (m > 59) {
		h += m / 60;
		m = m % 60;
	}
}
istream& operator>>(istream& is, Time& temp) {
	cin >> temp.h >> temp.m >> temp.s;
		return is;
}