// 27110: 특식 배부
#include <iostream>

using namespace std;

int main() {
	int n, c[3] = { 0 }, sum = 0;

	cin >> n;

	for (int i = 0; i < 3; i++) {
		cin >> c[i];
		if (c[i] >= n) {
			sum += n;
		}
		else {
			sum += c[i];
		}
	}

	cout << sum;
}