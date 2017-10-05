#include <cstdio>

using namespace std;

int main() {
	int r, c, i, j, n, m[100][100];
	scanf("%d %d", &r, &c);
	for (i = 0; i < r; i++) {
		for (j = 0; j < c; j++) scanf("%d", &m[i][j]);
	}
	for (i = 0; i < r; i++) {
		for (j = 0; j < c; j++) {
			scanf("%d", &n);
			printf("%d ", m[i][j] + n);
		}
		printf("\n");
	}
}