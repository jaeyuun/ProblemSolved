// 2920: À½°è
#include <iostream>
#include <string>

using namespace std;

int main() {
	int n[8] = { 0 };
	string c = "";

	for (int i = 0; i < 8; i++) {
		cin >> n[i];
	}

	if (n[0] == 1) {
		for (int i = 0; i < 8; i++) {
			if (n[i] != i + 1) {
				c = "mixed";
				break;
			}
			c = "ascending";
		}
	}
	else if (n[0] == 8) {
		for (int i = 7; i >= 0; i--) {
			if (n[i] + i != 8) {
				c = "mixed";
				break;
			}
			c = "descending";
		}
	}
	else {
		c = "mixed";
	}

	cout << c;
}