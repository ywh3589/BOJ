#include<cstdio>
#include<algorithm>

using namespace std;

int main() {
	int n, i, j, m = 1000000000;
	long long dp[100][10], res = 0;
	scanf("%d", &n);
	dp[0][0] = 0;
	fill(dp[0]+1, dp[0] + 10, 1);
	for (i = 1; i <= n; i++) {
		for (j = 0; j <= 9; j++) {
			if (j == 0) dp[i][j] = dp[i - 1][j + 1] % m;
			else if (j == 9) dp[i][j] = dp[i - 1][j - 1] % m;
			else dp[i][j] = (dp[i - 1][j - 1] + dp[i - 1][j + 1]) % m;
		}
	}
	for (j = 0; j <= 9; j++) {
		res = (res + dp[n - 1][j]) % m;
	}
	printf("%lld", res);
}