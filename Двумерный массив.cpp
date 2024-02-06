#include <iostream>;
using namespace std;
int main() {
	const int n = 3; srand(time(NULL)); int a[n][n];  int a1[n], count = 0, count1 = 0;
	for (int i = 0; i < n; i++) { for (int j = 0; j < n; j++) { a[i][j] = rand() % 100 + 1; } }
	for (int i = 0; i < n; i++) { for (int j = 0; j < n; j++) { cout << a[i][j] << " "; } cout << endl; }
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i == j)
				a1[i] = a[i][j];
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			count = 0;
			if (i != j) {
				for (int k = 0; k < n; k++) {
					if (a[i][j] > a1[k]) {
						count++;
					}
				}
				if (count == n) {
					count1++;
				}
			}
		}
	}
	cout << count1;
}
