#ifndef MYTIME_H_
#define MYTIME_H_
#include <iostream>
class Time {
private:
	int hours;
	int minutes;
public:
	Time();
	Time(int temp1, int temp2);
	void AddMin(int temp);
	void AddHr(int temp);
	void Reset(int temp1, int temp2);
	Time operator+(Time t);
	Time operator-(Time t);
	Time operator*(double n);
	friend Time operator*(double m, Time t);
	friend std::ostream& operator<<(std::ostream& os, Time t);
};
#endif