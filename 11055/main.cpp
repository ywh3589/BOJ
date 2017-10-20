#include<cstdio>
#include<algorithm>

using namespace std;

int main() {
	int n, i, j, dp[1001], a[1001], m = 0;
	scanf("%d", &n);
	fill(dp, dp + n + 1, 0);
	for (i = 1; i <= n; i++) scanf("%d", a + i);
	for (i = 1; i <= n; i++) {
		dp[i] = a[i];
		for (j = 1; j < i; j++) {
			if (a[i] <= a[j]) continue;
			dp[i] = max(dp[i], dp[j] + a[i]);
		}
		m = max(m, dp[i]);
	}
	printf("%d", m);
}