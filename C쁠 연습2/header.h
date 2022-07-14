//18-13
#include<iostream>
using namespace std;
class Evaluation {
protected:
	string name;
	int num, korean, english, mathmatics, rank;
public:
	Evaluation();
	int getnum();
	string getname();
	virtual void setval(int temp1, string temp2, int temp3, int temp4, int temp5, int temp6, int temp7)=0;
	virtual void indiv()=0;
	virtual void disp()=0;
	virtual int tot()=0;
	virtual double avg() = 0;
	int kor();
	int getrank();
	void setrank(int temp);
};

class Society :public Evaluation {
	int society, history;
public:
	Society();
	void setval(int temp1, string temp2, int temp3, int temp4, int temp5, int temp6, int temp7);
	void indiv();
	void disp();
	int tot();
	double avg();
};

class Science :public Evaluation {
	int science;
public:
	Science();
	void setval(int temp1, string temp2, int temp3, int temp4, int temp5, int temp6, int temp7);
	void indiv();
	void disp();
	int tot();
	double avg();
};

class Ctrl {
	string name;
	int key, kor, eng, mat, soc, his, sci,cnt;
	Evaluation* arr[10];
public:
	Ctrl();
	void input();
	void one();
	void all();
	void rank(Evaluation *temp[10], int p);
};