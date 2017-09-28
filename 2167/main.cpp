#include <cstdio>

using namespace std;

int main() {
	int h, w, k, a, b, c, d, s, i, j, m[301][301];
	scanf("%d %d", &h, &w);
	for (i = 0; i < h; i++) {
		for (j = 0; j < w; j++) {
			scanf("%d", &m[i][j]);
		}
	}
	scanf("%d", &k);
	while (k--) {
		scanf("%d %d %d %d", &a, &b, &c, &d);
		s = 0;
		for (i = a - 1; i <= c - 1; i++) {
			for (j = b - 1; j <= d - 1; j++) s += m[i][j];
		}
		printf("%d\n", s);
	}
}
