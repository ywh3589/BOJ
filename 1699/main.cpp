#include<cstdio>
#include<algorithm>

using namespace std;

int main() {
	int n, i, j, dp[100001];
	scanf("%d", &n);
	dp[0] = 0;
	dp[1] = 1;
	for (i = 2; i <= n; i++) {
		dp[i] = dp[i - 1] + 1;
		for (j = 2; j*j <= i; j++) {
			dp[i] = min(1 + dp[i - j*j], dp[i]);
		}
	}
	printf("%d", dp[n]);
}