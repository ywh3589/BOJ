#include<cstdio>
#include<cmath>

using namespace std;

int main() {
	int i, j, y, x, c = 0;
	char s[5][5];
	for (i = 0; i < 4; i++) scanf("%s", s[i]);
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			if (s[i][j] == '.') continue;
			y = ((int)s[i][j] - 'A') / 4;
			x = ((int)s[i][j] - 'A') % 4;
			c += abs(i - y) + abs(j - x);
		}
	}
	printf("%d", c);
}