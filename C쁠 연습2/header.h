//18-12
class Calculator {
public:
	Calculator();
	virtual int add(int a, int b) = 0; // ���������ո���
	virtual int subtract(int a, int b) = 0; // ��������������
	virtual double average(int a[], int size) = 0; // �迭a����ո���size�¹迭��ũ��
};

class GoodCalc :public Calculator {
public:
	GoodCalc();
	int add(int a, int b);
	int subtract(int a, int b) ;
	double average(int a[], int size);
};