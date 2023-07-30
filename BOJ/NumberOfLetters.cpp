// 10808: ¾ËÆÄºª °³¼ö
#include <iostream>
#include <string>

using namespace std;

int main() {
	string s;
	int a[26] = { 0 };

	cin >> s;

	for (int i = 0; i < s.length(); i++) {
		for (int j = 0; j < 26; j++) {
			if (s[i] == (char)(97 + j)) {
				a[j]++;
			}
		}
	}

	for (int i = 0; i < 26; i++) {
		cout << a[i] << " ";
	}
}