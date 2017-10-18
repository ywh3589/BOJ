#include<cstdio>

using namespace std;

int main() {
	int n, i, j, dp[1001];
	scanf("%d", &n);
	if (n <= 1 || n%2 == 0) printf("0");
	else {
		dp[0] = 1;
		for (i = 2; i <= n; i += 2) {
			dp[i] = 3 * dp[i - 2];
			for (j = 4; j <= i; j += 2) dp[i] += 2 * dp[i - j];
		}
		printf("%d", dp[n]);
	}
}