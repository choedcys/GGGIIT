#include<iostream>
#include"header.h"
using namespace std;

template<typename T,size_t N>
void reverseArray(T (&temp)[N]) {
	T tp;
	for (int i = 0; i < N/2; i++) {
		tp = temp[i];
		temp[i] = temp[N - i - 1];
		temp[N - i - 1] = tp;
	}
}

int main() {
	int x[] = { 1,2,3,4,5 };
	char y[] = "apple";
	reverseArray(x);
	reverseArray(y);
	for (int i = 0; i < 5; i++) {
		cout << x[i];
	}
	cout << endl;
	for (int i = 0; i < 6; i++) {
		cout << y[i];
	}
	cout << endl;
}