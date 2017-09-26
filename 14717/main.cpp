#include <cstdio>
#include <cstring>

using namespace std;

int rk(int a, int b) {
	if (a == b) return 10 - a;
	else return 19 - (a + b) % 10;
}

int main() {
	int a, b, i, j, r, c = 306, chk[21];
	scanf("%d %d", &a, &b);
	r = rk(a, b);
	chk[a] = -1;
	if (a == b) chk[b + 10] = -1;
	else chk[b] = -1;
	for (i = 1; i <= 20; i++) {
		if (chk[i] == -1) continue;
		for (j = 1; j <= 20; j++) {
			if (chk[j] == -1) continue;
			if (i == j) continue;
			if (r >= rk((i > 10) ? i - 10 : i, (j > 10) ? j - 10 : j)) {
				c--;
			}
		}
	}
	printf("%.3f", (float)c / 306);
}
