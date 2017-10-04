#include <cstdio>
#include <algorithm>

using namespace std;

pair<int, int> p[26];
bool a[5][5];

bool chk() {
	int i, j, c = 0;
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) if (!a[i][j]) break;
		if (j == 5) c++;
	}
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) if (!a[j][i]) break;
		if (j == 5) c++;
	}
	for (i = 0; i < 5; i++) if (!a[i][i]) break;
	if (i == 5)c++;
	for (i = 0; i < 5; i++) if (!a[i][4-i]) break;
	if (i == 5)c++;
	if (c >= 3) return true;
	else return false;
}

int main() {
	int i, j;
	for (i = 0; i < 25; i++) {
		scanf("%d", &j);
		p[j].first = i / 5;
		p[j].second = i % 5;
		a[i / 5][i % 5] = false;
	}
	for (i = 0; i < 25; i++) {
		scanf("%d", &j);
		a[p[j].first][p[j].second] = true;
		if (chk()) {
			printf("%d", i + 1);
			return 0;
		}
	}
}