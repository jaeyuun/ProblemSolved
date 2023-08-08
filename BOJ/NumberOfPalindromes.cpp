// 1259: ÆÓ¸°µå·Ò¼ö
#include <iostream>
#include <string>

using namespace std;

int main() {
	string n, p;

	while (1) {
		p = "yes";

		cin >> n;

		if (n == "0") break;

		for (int i = 0; i < n.length() / 2; i++) {
			if (n[i] != n[n.length() - 1 - i]) {
				p = "no";
				break;
			}
			else {
				p = "yes";
			}
		}

		cout << p << endl;
	}
}