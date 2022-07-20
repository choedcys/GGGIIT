#include<iostream>
using namespace std;
class Time {
private:
	int h, m;
public:
	Time();
	Time(int temp1, int temp2);
	friend Time& operator+(Time&temp1, double temp2);
	friend Time& operator+(double temp1, Time& temp2);
	friend Time operator+(Time& temp1, Time& temp2);
	friend ostream& operator<<(ostream& os, Time& temp);
	friend istream& operator>>(istream& is, Time& temp);
};