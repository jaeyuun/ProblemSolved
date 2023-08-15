// 1436: 영화감독 숌
#include <iostream>
#include <string>

using namespace std;

int main() {
	int n, num = 666, cnt = 0;
	string s = "666";

	cin >> n;

	while (1) {
		if (s.find("666") != string::npos) { // 666이 포함된 숫자를 찾았을 때
			num = stoi(s);
			cnt++;
		}
		if (n == cnt) {
			break;
		}
		// 찾을 때까지 숫자++
		num++;
		s = to_string(num);
	}

	cout << num;
}