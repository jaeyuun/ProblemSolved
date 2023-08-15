// 1181: 단어 정렬
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

string s[20000]; // 전역 변수

bool compare(string a, string b) { // 비교 함수
	if (a.length() == b.length()) { // 단어 길이가 같을 때
		return a < b; // 사전적 순서대로 정렬
	}
	else { // 단어 길이가 다를 때
		return a.length() < b.length(); // 단어 길이가 다른 순서대로 정렬
	}
}

int main() {
	int n;
	string temp = " ";

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> s[i];
	}

	sort(s, s + n, compare); // sort 알고리즘

	cout << s[0] << "\n";
	for (int i = 1; i < n; i++) {
		if (s[i - 1] != s[i]) { // 중복 단어 삭제
			cout << s[i] << "\n";
		}
	}
}