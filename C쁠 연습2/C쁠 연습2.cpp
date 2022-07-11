#include<iostream>
using namespace std;
//최소 동전 갯수 교환 문제(그리디), 책내용을 이해후 c언어로 구현


int main() {
	int money, cnt = 0;
	int wallet[4] = {500,100,50,10};
	cout << "가격을 입력하시오: ";
	cin >> money;
	for (int i = 0; i < 4; i++) {
		cnt += int(money / wallet[i]);
		//money -= wallet[i]*int(money / wallet[i]); 내가 짠 부분
		money %= wallet[i]; //훨씬더 간결한 내용
	}
	cout << cnt;
}