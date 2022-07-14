//18-13
#include<iostream>
#include<string>
#include<iomanip>
#include"header.h"
using namespace std;

Evaluation::Evaluation() {}
int Evaluation::getnum() {
	return num;
}
string Evaluation::getname() {
	return name;
}

Society::Society() {}
void Society::setval(int temp1, string temp2, int temp3, int temp4, int temp5, int temp6, int temp7){
	num = temp1;
	name = temp2;
	korean = temp3;
	english = temp4;
	mathmatics = temp5;
	society = temp6;
	history = temp7;
}
void Society::indiv() {
	cout << name << "�� ���μ���: " << endl;
	cout << "����,����,����: " << korean << " " << english << " " << mathmatics << endl;
	cout << "���ð��� ��ȸ, �ѱ���: " << society << " " << history << endl;
}
void Society::disp() {
	cout << num << setw(13) << name << setw(10) << korean << setw(10) << english << setw(10) << mathmatics << setw(10);
	cout << setw(20) << society << setw(10) << history << setw(10) << tot() << setw(10) << avg();
}
int Society::tot() {
	return korean + english + mathmatics + society + history;
}
double Society::avg() {
	return tot() / 5.0;
}

Science::Science() {}
void Science::setval(int temp1, string temp2, int temp3, int temp4, int temp5, int temp6, int temp7) {
	num = temp1;
	name = temp2;
	korean = temp3;
	english = temp4;
	mathmatics = temp5;
	science = temp6;
}
void Science::indiv() {
	cout << name << "�� ���μ���: " << endl;
	cout << "����,����,����: " << korean << " " << english << " " << mathmatics << endl;
	cout << "���ð��� ����: " << science << endl;
}
int Science::tot() {
	return korean + english + mathmatics + science;
}
void Science::disp() {
	cout << num << setw(13) << name << setw(10) << korean << setw(10) << english << setw(10) << mathmatics << setw(10);
	cout << science << setw(30) << tot() << setw(10) << avg();
}
double Science:: avg() {
	return tot() / 4.0;
}

Ctrl::Ctrl():cnt(0) {}
void Ctrl::input() {
	cout << "1. ���� 2.�̰�=> ";
	cin >> key;
	if (key == 1) {
		cout << "��ȣ: ";
		cin >> key;
		cout << "�̸�: ";
		cin.get();
		getline(cin, name);
		cout << "���� ���� ����: ";
		cin >> kor >> eng >> mat;
		cout << "��ȸ ����: ";
		cin >> soc >> his;
		arr[cnt] = new Society();
		arr[cnt]->setval(key, name, kor, eng, mat, soc, his);
	}
	if (key == 2) {
		cout << "��ȣ: ";
		cin >> key;
		cout << "�̸�: ";
		cin.get();
		getline(cin, name);
		cout << "���� ���� ����: ";
		cin >> kor >> eng >> mat;
		cout << "����: ";
		cin >> sci;
		arr[cnt] = new Science();
		arr[cnt]->setval(key, name, kor, eng, mat,sci,0);
	}
	cnt++;
}

void Ctrl::one() {
	cout << "��ȣ�� �̸��� �Է��Ͻÿ�: " << endl;
	cout << "��ȣ: ";
	cin >> key;
	cout << "�̸�: ";
	cin.get();
	getline(cin, name);
	for (int i = 0; i < cnt; i++) {
		if (arr[i]->getname() == name && arr[i]->getnum()) {
			arr[i]->indiv();
			break;
		}
	}
}


void Ctrl::all() {
	int* list = rank(arr);
	cout << "����ǥ" << endl;
	cout << "===============================================================================================" << endl;
	cout << "��ȣ" << setw(10) << "�̸�" << setw(10) << "����" << setw(10) << "����" << setw(10) << "����";
	cout << setw(10) << "����" << setw(10) << "��ȸ" << setw(10) << "�ѱ���" << setw(10) << "����" << setw(10) << "���" << setw(10) << "���" << endl;
	cout << "===============================================================================================" << endl;
	for (int i = 0; i < cnt; i++) {
		arr[i]->disp();
		cout << setw(10)<<list[i]<<endl;
	}
}

int* Ctrl::rank(Evaluation *temp[10]) {
	int r = 1;
	int* rank = new int[cnt];
	for (int i = 0; i < cnt; i++) {
		for (int j = 0; j < cnt; j++) {
			if (temp[i]->avg() < temp[j]->avg()) {
				r++;
			}
			
		}
		rank[i] = r;
		r = 1;
	}
	return rank;
}
int Evaluation::kor() {
	return korean;
}