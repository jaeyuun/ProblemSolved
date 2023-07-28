// Å·, Äý, ·è, ºñ¼ó, ³ªÀÌÆ®, Æù
#include <iostream>

using namespace std;

int main() {
	int chess[6] = { 1, 1, 2, 2, 2, 8 }, p[6] = { 0 };

	for (int i = 0; i < 6; i++) {
		cin >> p[i];
		p[i] = chess[i] - p[i];
	}

	for (int i = 0; i < 6; i++) {
		cout << p[i] << " ";
	}
}