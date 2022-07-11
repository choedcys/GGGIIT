#include<iostream>
using namespace std;
//최소 동전 갯수 교환 문제(그리디) 


int main() {
	int money, cnt = 500;
	int wallet[4];
	cout << "가격을 입력하시오: ";
	cin >> money;
	for (int i = 0; i < 4; i++) {
		wallet[i] = int(money / cnt);
		money -= wallet[i]*cnt;
		if (i % 2 == 0) {
			cnt /= 5;
		}
		else {
			cnt /= 2;
		}
	}//손님 지갑에 돈을 넣어줌
	cnt = 500;
	for (int i = 0; i < 4; i++) {
		cout << cnt<<"원: "<< wallet[i]<<endl;
		if (i % 2 == 0) {
			cnt /= 5;
		}
		else {
			cnt /= 2;
		}
	}//지갑의 돈을 확인함
}