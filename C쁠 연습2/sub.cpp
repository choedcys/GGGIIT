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
	cout << name << "의 개인성적: " << endl;
	cout << "국어,영어,수학: " << korean << " " << english << " " << mathmatics << endl;
	cout << "선택과목 사회, 한국사: " << society << " " << history << endl;
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
	cout << name << "의 개인성적: " << endl;
	cout << "국어,영어,수학: " << korean << " " << english << " " << mathmatics << endl;
	cout << "선택과목 과학: " << science << endl;
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
	cout << "1. 문과 2.이과=> ";
	cin >> key;
	if (key == 1) {
		cout << "번호: ";
		cin >> key;
		cout << "이름: ";
		cin.get();
		getline(cin, name);
		cout << "국어 영어 수학: ";
		cin >> kor >> eng >> mat;
		cout << "사회 역사: ";
		cin >> soc >> his;
		arr[cnt] = new Society();
		arr[cnt]->setval(key, name, kor, eng, mat, soc, his);
	}
	if (key == 2) {
		cout << "번호: ";
		cin >> key;
		cout << "이름: ";
		cin.get();
		getline(cin, name);
		cout << "국어 영어 수학: ";
		cin >> kor >> eng >> mat;
		cout << "과학: ";
		cin >> sci;
		arr[cnt] = new Science();
		arr[cnt]->setval(key, name, kor, eng, mat,sci,0);
	}
	cnt++;
}

void Ctrl::one() {
	cout << "번호와 이름을 입력하시오: " << endl;
	cout << "번호: ";
	cin >> key;
	cout << "이름: ";
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
	cout << "성적표" << endl;
	cout << "===============================================================================================" << endl;
	cout << "번호" << setw(10) << "이름" << setw(10) << "국어" << setw(10) << "영어" << setw(10) << "수학";
	cout << setw(10) << "과학" << setw(10) << "사회" << setw(10) << "한국사" << setw(10) << "총점" << setw(10) << "평균" << setw(10) << "등수" << endl;
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