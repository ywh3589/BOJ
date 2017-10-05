#include <cstdio>
#include <algorithm>

using namespace std;

int main() {
	int a, b, c, d, i, j, k, r = 0;
	bool m[101][101];
	for (i = 0; i <= 100; i++) fill(m[i], m[i] + 101, false);
	for (i = 0; i < 4; i++) {
		scanf("%d %d %d %d", &a, &b, &c, &d);
		for (j = a; j < c; j++) {
			for (k = b; k < d; k++) m[j][k] = true;
		}
	}
	for (i = 1; i <= 100; i++) {
		for (j = 1; j <= 100; j++) if (m[i][j]) r++;
	}
	printf("%d", r);
}