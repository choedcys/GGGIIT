#include<iostream>
using namespace std;

class Time {
	int h,m,s;
public:
	Time();
	Time(int temp1, int temp2, int temp3);
	Time operator+(int temp);
	Time operator-(int temp);
	bool operator<(Time temp);
	bool operator>(Time temp);
	bool operator==(Time temp);
	bool operator!=(Time temp);
	void arrange();
	void display();
	friend istream& operator>>(istream& is, Time& temp);
};