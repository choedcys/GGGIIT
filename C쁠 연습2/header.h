//18-3
class BankAcc {
protected:
	double money;
	double rate;
	double interest;
public:
	void deposit(double temp);
	double withdraw(double temp);
	virtual double getinterest() =0;
	virtual void print() = 0;
};
class SavingAcc :public BankAcc {
public:
	double getinterest();
	void print();
	SavingAcc();
	SavingAcc(double temp);
};
class CheckingAcc :public BankAcc {
public:
	double getinterest();
	void print();
	CheckingAcc();
	CheckingAcc(double temp);
};