// 15439: 베라의 패션
#include <iostream>

using namespace std;

int main() {
	int n, sum = 0;

	cin >> n;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i == j) continue;
			sum++;
		}
	}

	cout << sum;
}