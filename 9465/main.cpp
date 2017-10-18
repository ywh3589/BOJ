#include<cstdio>
#include<algorithm>

using namespace std;

int main() {
	int n, m, i, j, dp[100001][2], a[100001][2];
	scanf("%d", &n);
	while (n--) {
		scanf("%d", &m);
		for (i = 0; i < 2; i++) {
			for (j = 1; j <= m; j++) scanf("%d", &a[j][i]);
		}
		dp[1][0] = a[1][0];
		dp[1][1] = a[1][1];
		for (i = 2; i <= m; i++) {
			for (j = 0; j < 2; j++) {
				dp[i][j] = a[i][j] + max(dp[i - 1][(j + 1) % 2], dp[i - 2][(j + 1) % 2]);
			}
		}
		printf("%d\n", max(dp[m][0], dp[m][1]));
	}
}