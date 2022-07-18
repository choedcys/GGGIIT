#include <iostream>
#include "header.h"
using namespace std;

Time::Time():hours(0),minutes(0){}
Time::Time(int temp1, int temp2 = 0):hours(temp1),minutes(temp2) {}
void Time::AddMin(int temp) {
	minutes += temp;
}
void Time::AddHr(int temp) {
	hours += temp;
}
void Time::Reset(int temp1 = 0, int temp2 = 0) {
	hours = temp1;
	minutes = temp2;
}
Time Time::operator+(Time t){
	t.hours += this->hours;
	t.minutes += this->minutes;
	if (t.minutes >= 60) {
		t.minutes -= 60;
		t.hours += 1;
	}
	return t;
}
Time Time::operator-(Time t){
	t.hours -= this->hours;
	if (t.minutes >= 30) {
		t.minutes -= 30;
		t.minutes *= 2;
		t.hours += 1;
	}
	else {
		t.minutes -=this->minutes;
	}
	return t;
}
Time Time::operator*(double n) {
	cout << *this;
	this->hours *= n;
	this->minutes *= n;
	if (this->minutes >= 60) {
		int temp = this->minutes / 60;
		this->minutes %= 60;
		this->hours += temp;
	}
	return *this;
}


Time operator*(double m, Time t)
{
	return t * m;
}
std::ostream& operator<<(ostream& os, Time t) {
	os << t.hours << "½Ã°£ " << t.minutes << "ºÐ" << endl;
	return os;
}