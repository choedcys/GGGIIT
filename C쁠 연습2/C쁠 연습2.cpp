#include<iostream>
using namespace std;
//�ּ� ���� ���� ��ȯ ����(�׸���) 


int main() {
	int money, cnt = 500;
	int wallet[4];
	cout << "������ �Է��Ͻÿ�: ";
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
	}//�մ� ������ ���� �־���
	cnt = 500;
	for (int i = 0; i < 4; i++) {
		cout << cnt<<"��: "<< wallet[i]<<endl;
		if (i % 2 == 0) {
			cnt /= 5;
		}
		else {
			cnt /= 2;
		}
	}//������ ���� Ȯ����
}