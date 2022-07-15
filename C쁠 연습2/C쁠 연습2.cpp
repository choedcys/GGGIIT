#include<iostream>
using namespace std;

int main() {
	int x, y,ans=0,min,comp;
	cout << "행 개수: ";
	cin >> x;
	cout << "열 개수: ";
	cin >> y;
	int **card;
	int* list = new int[x];
	card = (int**) malloc(sizeof(int*)*x);
	for (int row = 0; row < x; row++) {
		card[row] = new int[y];
	}
	cout << "카드 입력: "<<endl;
	for (int row = 0; row < x; row++) {
		for (int col = 0; col < y; col++) {
			cout << row << "행" << col << "열" << " 입력";
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
	cout <<"정답: "<< ans << "행";
}