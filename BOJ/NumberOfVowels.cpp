// 1264: ������ ����
#include <iostream>
#include <string>
using namespace std;

int main() {
	char en[10] = { 'A', 'E', 'I', 'O', 'U', 'a', 'e', 'i', 'o', 'u' };
	string s; // �ִ� 255�ڸ� �Է� ����
	int v = 0;

	while (1) {
		v = 0;
		getline(cin, s);
		
		for (int i = 0; i < s.length(); i++) {
			for (int j = 0; j < 10; j++) {
				if (s[i] == en[j]) {
					v++;
				}
			}
		}

		if (s == "#") break;

		cout << v << endl;
	}
}