#include <iostream>
using namespace std;

int main() {
	int N, D[100];
	cin >> N;
	for (int i = 0;i < N;i++) {
		cin >> D[i];
	}
	int c = 0, m = 0, mi,bm;
	for (int j = 0; j < N;j++) {
		for (int i = 0; i < N; i++) {
			if (bm == D[i]) {
				D[i] = 0;
			}
			if (m < D[i]) {
				m = D[i];
				mi = i;
			}
		}
		if (m!=0) {
			c++;
		}
		D[mi] = 0;
		bm = m;
		m = 0;
	}
	cout << c;
	return 0;
}
