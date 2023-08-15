// 1181: �ܾ� ����
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

string s[20000]; // ���� ����

bool compare(string a, string b) { // �� �Լ�
	if (a.length() == b.length()) { // �ܾ� ���̰� ���� ��
		return a < b; // ������ ������� ����
	}
	else { // �ܾ� ���̰� �ٸ� ��
		return a.length() < b.length(); // �ܾ� ���̰� �ٸ� ������� ����
	}
}

int main() {
	int n;
	string temp = " ";

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> s[i];
	}

	sort(s, s + n, compare); // sort �˰���

	cout << s[0] << "\n";
	for (int i = 1; i < n; i++) {
		if (s[i - 1] != s[i]) { // �ߺ� �ܾ� ����
			cout << s[i] << "\n";
		}
	}
}