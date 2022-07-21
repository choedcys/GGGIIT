#include<iostream>
using namespace std;

template<class T, class U> Pair<T, U>::Pair() : first(0), second(0) {}
template<class T, class U> Pair<T, U>::Pair(T temp1, U temp2) : first(temp1), second(temp2) {}
template<class T, class U> void Pair<T, U>::setfir(T temp) {
	first = temp;
}
template<class T, class U> void Pair<T, U>::setsec(U temp) {
	second = temp;
}
template<class T, class U> T Pair<T, U>::getfir() {
	return first;
}
template<class T, class U> U Pair<T, U>::getsec() {
	return second;
}

