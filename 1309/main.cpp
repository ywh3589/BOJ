#include<cstdio>

using namespace std;

int main() {
	int n, i, dp[100001][3], m = 9901;
	scanf("%d", &n);
	dp[0][0] = dp[0][1] = dp[0][2] = 1;
	for (i = 1; i < n; i++) {
		dp[i][0] = (dp[i - 1][0] + dp[i - 1][1] + dp[i - 1][2]) % m;
		dp[i][1] = (dp[i - 1][0] + dp[i - 1][2]) % m;
		dp[i][2] = (dp[i - 1][0] + dp[i - 1][1]) % m;
	}
	printf("%d", (dp[n - 1][0] + dp[n - 1][1] + dp[n - 1][2])%m);
}