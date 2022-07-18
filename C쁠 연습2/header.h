#include<iostream>
using namespace std;

class Time {
	int h, m;
public:

	Time(int temp1, int temp2);
	Time operator+(Time temp);
	Time operator++(int n);
	friend std::ostream& operator<<(ostream& os, Time temp);
};