// 1436: ��ȭ���� ��
#include <iostream>
#include <string>

using namespace std;

int main() {
	int n, num = 666, cnt = 0;
	string s = "666";

	cin >> n;

	while (1) {
		if (s.find("666") != string::npos) { // 666�� ���Ե� ���ڸ� ã���� ��
			num = stoi(s);
			cnt++;
		}
		if (n == cnt) {
			break;
		}
		// ã�� ������ ����++
		num++;
		s = to_string(num);
	}

	cout << num;
}