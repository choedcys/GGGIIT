#include<iostream>
#include"header.h"
using namespace std;

template<typename T>
T biggest(T* temp1, int temp2) {
	T res = temp1[0];
	for (int i = 0; i < temp2; i++) {
		if (res < temp1[i])
			res = temp1[i];
	}
	return res;
}

int main() {
	int x[] = { 1, 10, 100, 5, 4 };
	cout << biggest(x,5) << endl; // 5는배열x의크기
	double y[] = { 6.4, 3.3, -200.6, 7.7, 8.8, 20.3 };
	cout << biggest(y,6); // 6는배열y의크기
}
