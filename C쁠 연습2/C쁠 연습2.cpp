#include <iostream>
#include <cstdlib>
#include"header.h"
using namespace std;

int main()
{
	Array a1(10), a2(10), a3(10);
	a1[0] = 1;
	a1[1] = 2;
	a1[2] = 3;
	a1[3] = 4;

	a2[0] = 1;
	a2[1] = 2;
	a2[2] = 3;
	a2[3] = 4;

	a3 = a1;
	a3[3] = 5;
	cout << "a1 �迭�� : ";
	cout << a1 << endl;
	cout << "a2 �迭�� : ";
	cout << a2 << endl;
	cout << "a3 �迭�� : ";
	cout << a3 << endl;
	cout << "��� ������ <<�� �����ε� : ";
	cout << a1 << endl;
	cout << "a1 == a2 �� �����ε� : ";
	cout << (a1 == a2) << endl;
	cout << "a1 != a3 �� �����ε� : ";
	cout << (a1 != a3) << endl;
	cout << "a3 = a1 �� �����ε� : ";
	a3 = a1;
	cout << a3 << endl;
}
