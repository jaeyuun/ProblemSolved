// °ËÁõ¼ö
#include <iostream>

using namespace std;

int main() {
	int a[5], num = 0;

	for (int i = 0; i < 5; i++) {
		cin >> a[i];
		num += a[i] * a[i];
	}

	cout << num % 10;
}
