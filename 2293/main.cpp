#include<cstdio>
#include<algorithm>

using namespace std;

int main() {
	int n, k, c, i, dp[10001];
	scanf("%d %d", &n, &k);
	fill(dp, dp + k + 1, 0);
	dp[0] = 1;
	while (n--) {
		scanf("%d", &c);
		for (i = 0; i <= k - c; i++) dp[i + c] += dp[i];
	}
	printf("%d", dp[k]);
}