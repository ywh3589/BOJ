#include <cstdio>

using namespace std;

int main() {
	int t, a, b, i, j, k;
	long long m[15][15];
	for (i = 0; i <= 14; i++) m[0][i] = i;
	for (i = 1; i <= 14; i++) {
		for (j = 1; j <= 14; j++) {
			m[i][j] = 0;
			for (k = 1; k <= j; k++) {
				m[i][j] += m[i - 1][k];
			}
		}
	}
	scanf("%d", &t);
	while (t--) {
		scanf("%d\n%d", &a, &b);
		printf("%lld\n", m[a][b]);
	}
}