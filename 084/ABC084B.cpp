#include <iostream>
using namespace std;

int main() {
	int a,b;
	char s[11];
	bool c = false;
	cin >> a >> b;
	cin >> s;
	if (s[a] == '-' && s[a + b + 1] == NULL) {
		s[a] = '0';
		for (int i = 0; i < a+b+1; i++) {
			if (s[i] >= '0' && s[i] <= '9') {
				c = true;
			}
			else {
				c = false;
				break;
			}
		}
	}
	if (c==true) {
		cout << "Yes";
	}
	else {
		cout << "No";
	}
	return 0;
}
