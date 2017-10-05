#include <cstdio>

using namespace std;

int main() {
	char m[1000][1000];
	int h, w, i, j, a[5] = {0, 0, 0, 0, 0};
	scanf("%d %d", &h, &w);
	for (i = 0; i < 5 * h + 1; i++) {
		scanf("%s", m[i]);
		if (i % 5 == 4) {
			for (j = 1; j < 5 * w + 1; j += 5) {
				if (m[i][j] == '*') {
					a[4]++;
				}
				else if (m[i - 1][j] == '*') {
					a[3]++;
				}
				else if (m[i - 2][j] == '*') {
					a[2]++;
				}
				else if (m[i - 3][j] == '*') {
					a[1]++;
				}
				else a[0]++;
			}
		}
	}
	for (i = 0; i < 5; i++) printf("%d ", a[i]);
}