#include<cstdio>
#include<algorithm>

using namespace std;

int main() {
	int n, p[1001], i, j, dp[1001];
	scanf("%d", &n);
	fill(dp, dp + n + 1, 0);
	for (i = 1; i <= n; i++) {
		scanf("%d", p + i);
		dp[i] = p[i];
		for (j = 1; j < i; j++) {
			dp[i] = max(dp[j] + p[i - j], dp[i]);
		}
	}
	printf("%d", dp[n]);
}