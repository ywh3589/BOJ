#include<cstdio>
#include<algorithm>
#define INF -987654321

using namespace std;

int dp[301][2], s[301], n;

int sol(int a, int b) {
	if (a > n) return INF;
	if (a == n) return s[a];
	int *p = &dp[a][b];
	if (*p == -1) {
		if (b == 1) *p = s[a] + sol(a + 2, 0);
		else *p = s[a] + max(sol(a + 1, 1), sol(a + 2, 0));
	}
	return *p;
}

int main() {
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		fill(dp[i], dp[i] + 2, -1);
		scanf("%d", s+i);
	}
	printf("%d", max(sol(1, 0), sol(2, 0)));
}