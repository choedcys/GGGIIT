template<class T, class U>
class Pair {
	T first;
	U second;
public:
	Pair();
	Pair(T temp1, U temp2);
	void setfir(T temp);
	void setsec(U temp);
	T getfir();
	U getsec();
};
#include"template sub.hpp"