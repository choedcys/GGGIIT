#include<iostream>
using namespace std;
//�ּ� ���� ���� ��ȯ ����(�׸���), å������ ������ c���� ����


int main() {
	int money, cnt = 0;
	int wallet[4] = {500,100,50,10};
	cout << "������ �Է��Ͻÿ�: ";
	cin >> money;
	for (int i = 0; i < 4; i++) {
		cnt += int(money / wallet[i]);
		//money -= wallet[i]*int(money / wallet[i]); ���� § �κ�
		money %= wallet[i]; //�ξ��� ������ ����
	}
	cout << cnt;
}