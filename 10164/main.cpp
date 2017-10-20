#include<cstdio>
#include<algorithm>

using namespace std;

int r, c, k, y, x;

int sol(int h, int w) {
	int i, j, dp[20][20];
	fill(dp[0], dp[0] + w+1, 1);
	for (i = 1; i <= h; i++) {
		dp[i][0] = 1;
		for (j = 1; j <= w; j++) dp[i][j] = dp[i][j - 1] + dp[i - 1][j];
	}
	return dp[h][w];
}

int main() {
	scanf("%d %d %d", &r, &c, &k);
	if (k == 0) k++;
	y = (k - 1) / c;
	x = (k - 1) % c;
	printf("%d", sol(y, x)*sol(r - y-1, c - x-1));
}