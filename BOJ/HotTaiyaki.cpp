// 11945: ¶ß°Å¿î ºØ¾î»§
#include <iostream>

using namespace std;

int main() {
	int n, m;
	char t[10][10];

	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> t[i][j];
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = m - 1; j >= 0; j--) {
			cout << t[i][j];
		}
		cout << "\n";
	}
}