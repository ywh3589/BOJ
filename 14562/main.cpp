#include <cstdio>
#include <cstring>
#include <algorithm>
#define INF 987654321

using namespace std;

int dp[200][200];

int sol(int a, int b) {
	if (a > b) return INF;
	if (a == b) return 0;
	int *p = &dp[a][b];
	if (*p == -1) {
		*p = 1 + min(sol(a + 1, b), sol(2 * a, b+3));
	}
	return *p;
}

int main() {
	int N, a, b, i;
	scanf("%d", &N);
	while (N--) {
		scanf("%d %d", &a, &b);
		for (i = 0; i < 200; i++) fill(dp[i], dp[i] + 200, -1);
		printf("%d\n", sol(a, b));
	}
}
