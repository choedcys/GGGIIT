#include <iostream>
#include"header.h"
using namespace std;

int main(void)
{
	Number num(20);
	num.showData();
	(num.operator*()) = 30;
	num.operator->()->showData();
	(*num).showData();
}