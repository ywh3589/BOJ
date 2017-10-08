#include<cstdio>
#include<algorithm>

using namespace std;

int dp[501][501], s[501][501], n;

int sol(int a, int b) {
	if (a > n) return 0;
	int *p = &dp[a][b];
	if (*p == -1) {
		*p = s[a][b] + max(sol(a + 1, b), sol(a + 1, b+1));
	}
	return *p;
}

int main() {
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		fill(dp[i], dp[i] + i+1, -1);
		for (int j = 1; j <= i; j++) scanf("%d", s[i] + j);
	}
	printf("%d", sol(1, 1));
}