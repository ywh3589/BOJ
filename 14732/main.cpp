#include <cstdio>
#include <cstring>

using namespace std;

bool a[501][501];

int main() {
	int N, x1, y1, x2, y2, i, j, ans = 0;
	scanf("%d", &N);
	while (N--) {
		scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
		for (i = y1; i < y2; i++) {
			for (j = x1; j < x2; j++) {
				a[i][j] = true;
			}
		}
	}
	for (i = 0; i <= 500; i++) {
		for (j = 0; j <= 500; j++) {
			if (a[i][j]) ans++;
		}
	}
	printf("%d", ans);
}