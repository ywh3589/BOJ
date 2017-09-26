#include <cstdio>
#include <cstring>
#include <algorithm>

using namespace std;

int map[255][255], M, N, dx[] = { -1, -1, -1, 0, 0, 1, 1, 1 }, dy[] = {-1, 0, 1, -1, 1, -1, 0, 1};

void sol(int y, int x) {
	int i, ny, nx;
	map[y][x] = -1;
	for (i = 0; i < 8; i++) {
		ny = y + dy[i];
		nx = x + dx[i];
		if (ny < 1 || nx < 1 || ny > M || nx > N)continue;
		if (map[ny][nx] != 1) continue;
		sol(ny, nx);
	}
}

int main() {
	int i, j, c = 0;
	scanf("%d %d", &M, &N);
	for (i = 1; i <= M; i++) {
		for (j = 1; j <= N; j++) scanf("%d", &map[i][j]);
	}
	for (i = 1; i <= M; i++) {
		for (j = 1; j <= N; j++) {
			if (map[i][j] != 1) continue;
			c++;
			sol(i, j);
		}
	}
	printf("%d", c);
}
