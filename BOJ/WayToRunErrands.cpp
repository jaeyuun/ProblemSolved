// 5554: �ɺθ� ���� ��
#include <iostream>

using namespace std;

int main() {
	int t[4], sum = 0, x, y;

	for (int i = 0; i < 4; i++) {
		cin >> t[i];
		sum += t[i];
	}

	x = sum / 60;
	y = sum % 60;

	cout << x << endl;
	cout << y << endl;
}