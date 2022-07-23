#include<iostream>
#include"header.h"
using namespace std;

template<typename T>
T add(T* temp1, int temp2) {
	T sum = 0;
	for (int i = 0; i < temp2; i++) {
		sum += temp1[i];
	}
	return sum;
}

int main() {
	int x[] = { 1,2,3,4,5 };
	double d[] = { 1.2, 2.3, 3.4, 4.5, 5.6, 6.7 };
	cout << "sum of x[] = " << add(x, 5) << endl; // �迭 x�� ���� 5���� ���� ���
	cout << "sum of d[] = " << add(d, 6) << endl; // �迭 d�� ���� 6���� ���� ���
}
