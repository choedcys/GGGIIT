#include<iostream>
using namespace std;
int main() {
	int size, contin, len;
	int* arr;
	cout << "배열크기: ";
	cin >> size;
	arr = new int[size];
	cout << "배열입력: ";
	for (int row = 0; row < size; row++) {
		cin >> arr[row];
	}
	for (int row = 0; row<size ; row++) {
		for (int col = row; col < size-1; col++) {
			if (arr[col] > arr[col + 1]) {
				int temp = arr[col];
				arr[col] = arr[col + 1];
				arr[col + 1] = temp;
			}
		}
	}
	cout << "같은 숫자 중복허용수: ";
	cin >> contin;
	cout << "합의 최대 길이: ";
	cin >> len;
	cout<< arr[size - 1] * int(len - (len%contin)) + arr[size - 2] * (len% contin);
}