#include<cstdio>

using namespace std;

int main() {
	int r, c, i, j, y, x;
	char s[64][64], m[128][128];
	scanf("%d %d", &r, &c);
	for (i = 0; i < r; i++) scanf("%s", s[i]);
	for (i = 0; i < r; i++) {
		for (j = 0; j < c; j++) {
			m[i][j] = s[i][j];
			m[i][j + c] = s[i][c - j - 1];
			m[i + r][j] = s[r - i - 1][j];
			m[i + r][j + c] = s[r - i - 1][c - j - 1];
		}
	}
	scanf("%d %d", &y, &x);
	m[y - 1][x - 1] = (m[y - 1][x - 1] == '#') ? '.' : '#';
	for (i = 0; i < 2 * r; i++) {
		for (j = 0; j < 2 * c; j++) {
			printf("%c", m[i][j]);
		}
		printf("\n");
	}
}