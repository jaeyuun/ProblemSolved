// 10797: 10∫Œ¡¶
#include <iostream>

using namespace std;

int main() {
	int day, sum = 0, car[5] = { 0 };

	cin >> day;

	for (int i = 0; i < 5; i++) {
		cin >> car[i];
		if (car[i] == day) sum++;
	}

	cout << sum;
}