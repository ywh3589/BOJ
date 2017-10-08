#include<cstdio>
#include<algorithm>
#define INF 999999999999999

using namespace std;

long long dp[101], d[] = { 6, 2, 5, 5, 4, 5, 6, 3, 7, 6 };

long long sol(int n) {
	if (n < 0) return INF;
	long long *p = &dp[n], i, j;
	if (*p == -1) {
		i = (n == 6) ? 1 : 0;
		*p = INF;
		for (; i < 10; i++) {
			j = 10 * sol(n - d[i]) + i;
			if (*p > j) *p = j;
		}
	}
	return *p;
}

int main() {
	int t, n, i;
	fill(dp, dp + 101, -1);
	dp[0] = 0;
	scanf("%d", &t);
	while (t--) {
		scanf("%d", &n);
		printf("%lld ", sol(n));
		if (n % 2) {
			n -= 3;
			printf("7");
		}
		for (i = 0; i < n; i += 2) printf("1");
		printf("\n");
	}
}