#include<iostream>
using namespace std;
int main() {
	int size, contin, len;
	int* arr;
	cout << "�迭ũ��: ";
	cin >> size;
	arr = new int[size];
	cout << "�迭�Է�: ";
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
	cout << "���� ���� �ߺ�����: ";
	cin >> contin;
	cout << "���� �ִ� ����: ";
	cin >> len;
	cout<< arr[size - 1] * int(len - (len%contin)) + arr[size - 2] * (len% contin);
}