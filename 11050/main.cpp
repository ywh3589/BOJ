#include <cstdio>

using namespace std;

int main() {
	int i, j, c[11][11];
	for (i = 0; i <= 10; i++) {
		c[i][0] = 1;
		for (j = 1; j < i; j++) c[i][j] = c[i - 1][j] + c[i - 1][j - 1];
		c[i][i] = 1;
	}
	scanf("%d %d", &i, &j);
	printf("%d", c[i][j]);
}
