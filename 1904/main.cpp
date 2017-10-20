#include<cstdio>
#include<algorithm>

using namespace std;

int main() {
	int n, i, dp[1000001];
	scanf("%d", &n);
	fill(dp, dp + n + 1, 0);
	dp[1] = 1;
	dp[2] = 2;
	for (i = 3; i <= n; i++) {
		dp[i] = (dp[i - 1] + dp[i - 2]) % 15746;
	}
	printf("%d", dp[n]);
}