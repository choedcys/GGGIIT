#include<iostream>
#include"header.h"
using namespace std;

int main() {
	San array[5];
	San temp;
	for (int i = 0; i < 5; i++) {
		cin >> array[i];
	}
	cout << "높이 순으로 출력함"<<endl;

	for (int row = 0; row < 5; row++) {
		for (int col = row; col < 5; col++) {
			if (array[row].getheight() < array[col].getheight()) {
				temp = array[row];
				array[row] = array[col];
				array[col] = temp;
			}
		}
	}
	for (int i = 0; i < 5; i++) {
		cout << array[i];
	}
}