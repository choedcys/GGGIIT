#include<iostream>
#include<string>
#include"header.h"
using namespace std;
int main() {
	string name;
	int key, kor, eng, mat, soc, his, sci;
	Evaluation* sp = NULL, * ep = NULL, * cp = NULL;
	Ctrl list;
	while (1) {
		cout << "===�޴�===" << endl << "1. �Է�" << endl << "2. ��ü����ǥ" << endl << "3. ���μ���ǥ" << endl << "4. ����" << endl << "����=> ";
		cin >> key;
		if (key == 1) {
			list.input();
		}
		else if (key == 2) {
			list.all();
		}
		else if (key == 3) {
			list.one();
		}
		else if (key == 4) {
			cout << "���α׷� ����";
			break;
		}
		else {
			cout << "�߸��� �Է�!, �ٽ� �Է��Ͻÿ�" << endl;
		}
	}
}
