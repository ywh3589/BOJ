#include<cstdio>
#include<algorithm>

using namespace std;

int main() {
	int n, i, j, k, dp[1001][10], m = 10007, res = 0;
	scanf("%d", &n);
	for (i = 0; i < 10; i++) dp[0][i] = 1;
	for (i = 1; i < n; i++) {
		fill(dp[i], dp[i] + 10, 0);
		for (j = 0; j < 10; j++) {
			for (k = 0; k <= j; k++) {
				dp[i][j] = (dp[i][j] + dp[i - 1][k]) % m;
			}
		}
	}
	for (i = 0; i < 10; i++) res = (res + dp[n - 1][i]) % m;
	printf("%d", res);
}