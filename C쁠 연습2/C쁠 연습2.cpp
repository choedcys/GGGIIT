//18-6,7,8
#include<iostream>
#include"header.h"
using namespace std;

int main() {
	Rect r("���簢��", 3, 4, 1, 2);
	Oval e("Ÿ��", 4, 5, 2, 4);
	Tria t("�ﰢ��", 5, 7, 4, 7);
	Shape* pr = r.createShape();
	Shape* pe = e.createShape();
	Shape* pt = t.createShape();
	pr->setOrigin(3, 5);
	((Rect*)pr)->setWidth(4);
	((Rect*)pr)->setHeight(2);
	pe->setOrigin(3, 3);
	((Oval*)pe)->setWidth(4);
	((Oval*)pe)->setHeight(2);
	pt->setOrigin(2, 2);
	((Tria*)pt)->setWidth(4);
	((Tria*)pt)->setHeight(2);
	pr->draw();
	cout << "�� �� : " << pr->getArea() << endl;
	pr->move(2, 1);
	pe->draw();
	cout << "�� �� : " << pe->getArea() << endl;
	pe->move(2, 0);
	pt->draw();
	cout << "�� �� : " << pt->getArea() << endl;
	pt->move(0, 1);
	return 0;
}