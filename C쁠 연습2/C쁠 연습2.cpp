#include<iostream>
using namespace std;

int main() {
	int x, y,ans=0,min,comp;
	cout << "�� ����: ";
	cin >> x;
	cout << "�� ����: ";
	cin >> y;
	int **card;
	int* list = new int[x];
	card = (int**) malloc(sizeof(int*)*x);
	for (int row = 0; row < x; row++) {
		card[row] = new int[y];
	}
	cout << "ī�� �Է�: "<<endl;
	for (int row = 0; row < x; row++) {
		for (int col = 0; col < y; col++) {
			cout << row << "��" << col << "��" << " �Է�";
			cin>>card[row][col];
		}
	}
	for (int row = 0; row < x; row++) {
		for (int col = 0; col < y; col++) {
			cout <<card[row][col]<<" ";
		}
		cout << endl;
	}
	min = card[0][0];
	int row = 0;
	for (int row = 0; row < x; row++) {
		min = card[row][0];
		for (int col = 0; col < y; col++) {
			if (min > card[row][col])
				min = card[row][col];
		}
		list[row] = min;
	}
	min = list[0];
	for (int row = 0; row < x; row++) {
		if (min < list[row]) {
			ans = row;
			min = list[row];
		}
	}
	cout <<"����: "<< ans << "��";
}