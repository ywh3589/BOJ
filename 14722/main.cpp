#include <cstdio>
#include <cstring>
#include <algorithm>
#define MAX_LEN 1001

using namespace std;

int map[MAX_LEN][MAX_LEN], dp[MAX_LEN][MAX_LEN][3], N;

int sol(int y, int x, int t) {
	if (y >= N || x >= N) return 0;
	int *p = &dp[y][x][t];
	if (*p == -1) {
		if (map[y][x] == t) {
			*p = max(max(sol(y + 1, x, t), sol(y, x + 1, t)),  
				1 + max(sol(y + 1, x, (t+1)%3), sol(y, x + 1, (t+1)%3)));
		}
		else *p = max(sol(y + 1, x, t), sol(y, x + 1, t));
	}
	return *p;

}

int main() {
	int i, j;
	scanf("%d", &N);
	for (i = 0; i < N; i++) {
		for (j = 0; j < N; j++) {
			scanf("%d", &map[i][j]);
			dp[i][j][0] = dp[i][j][1] = dp[i][j][2] = -1;
		}
	}
	printf("%d", sol(0, 0, 0));
}
