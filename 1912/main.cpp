#include<cstdio>
#include<algorithm>

using namespace std;

int main() {
	int n, a, dp[100001], i, m = -1234567890;
	scanf("%d", &n);
	fill(dp, dp + n + 1, 0);
	for (i = 1; i <= n; i++) {
		scanf("%d", &a);
		dp[i] = max(dp[i - 1] + a, a);
		if (m < dp[i]) m = dp[i];
	}
	printf("%d", m);
}