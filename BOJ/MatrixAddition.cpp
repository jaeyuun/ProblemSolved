// Çà·Ä µ¡¼À
#include <iostream>
#define MAX 100

using namespace std;

int main() {
	int A[MAX][MAX], B[MAX][MAX], n, m;

	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> A[i][j];
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> B[i][j];
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << A[i][j] + B[i][j] << " ";
		}
		cout << "\n";
	}
}
