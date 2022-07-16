#include<iostream>
using namespace std;

int main() {
	int N, K,num,cnt=0;
	cout << "피제수 입력: ";
	cin >> N;
	cout << "제수 입력: ";
	cin >> K;
	while (1) {
		if (N / K == 0) {
			cnt+=N%K-1;
			break;
		}
		if (N % K == 0) {
			N /= K;
			cnt++;
		}
		else {
			cnt += N % K;
			N -= N%K;
		}
	}
	cout << cnt;
}