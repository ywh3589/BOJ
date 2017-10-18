#include<cstdio>
#include<algorithm>

using namespace std;

int dp[1001][1001], map[1001][1001], N, M;

int sol(int y, int x) {
	if (y >= N || x >= M) return 0;
	int *p = &dp[y][x];
	if (*p == -1) {
		*p = map[y][x] + max(max(sol(y + 1, x), sol(y, x + 1)), sol(y + 1, x + 1));
	}
	return *p;
}

int main() {
	scanf("%d %d", &N, &M);
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) scanf("%d", &map[i][j]);
		fill(dp[i], dp[i] + M, -1);
	}
	printf("%d", sol(0, 0));
}