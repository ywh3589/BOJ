#include<cstdio>
#include<algorithm>
#define INF 987654321

using namespace std;

int dp[1001][4], c[1001][4], n;

int sol(int a, int b) {
	if (a > n) return 0;
	int *p = &dp[a][b], i, j;
	if (*p == -1) {
		*p = INF;
		for (i = 1; i <= 3; i++) {
			if (i == b) continue;
			j = c[a][i] + sol(a + 1, i);
			if (*p > j) *p = j;
		}
	}
	return *p;
}

int main() {
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		fill(dp[i], dp[i] + 4, -1);
		for (int j = 1; j <= 3; j++) scanf("%d", c[i] + j);
	}
	printf("%d", sol(1, 0));
}