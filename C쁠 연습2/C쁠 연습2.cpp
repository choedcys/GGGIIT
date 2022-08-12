#include <iostream>
#include"header.h"
using namespace std;


int main()
{
	Date d(20,3,1);
	cout << "++ 연산자 : ";
	cout << d++ << endl;
	cout << "-- 연산자 : ";	
	cout << d--<<endl;
	cout<<d;
	return 0;
}