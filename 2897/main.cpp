#include <cstdio>
#include <algorithm>

using namespace std;

int main() {
	int a, b, c, d, i, j, k, r[5], my[] = { 0,0, 1, 1 }, mx[] = {0, 1, 0, 1};
	char m[100][100];
	scanf("%d %d", &a, &b);
	for (i = 0; i < a; i++) {
		scanf("%s", m[i]);
	}
	fill(r, r + 5, 0);
	for (i = 0; i < a - 1; i++) {
		for (j = 0; j < b - 1; j++) {
			c = d = 0;
			for (k = 0; k < 4; k++) {
				if (m[i + my[k]][j + mx[k]] == '.') d++;
				if (m[i + my[k]][j + mx[k]] == 'X') c++;
			}
			if (d + c < 4) continue;
			r[4 - d]++;
		}
	}
	for (i = 0; i < 5; i++) printf("%d\n", r[i]);
}