#include<iostream>
using namespace std;

class Date {
	int y,m,d,tot;
public:
	Date();
	Date(int temp1, int temp2, int temp3);
	void arrange();
	void dearrange();
	Date operator++(int temp);
	Date operator--(int temp);
	friend ostream& operator<<(ostream& os, Date& temp);
};