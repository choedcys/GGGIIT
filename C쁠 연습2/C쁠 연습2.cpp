#include <iostream>
#include"header.h"
using namespace std;


int main()
{
	Date d(16,2,29);
	cout << "++ ������ : ";
	cout << d++<<endl;
	cout << "-- ������ : ";
	cout << d--<<endl;
	cout<<d;
	return 0;
}