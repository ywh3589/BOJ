#include <cstdio>
#include <algorithm>

using namespace std;

int main() {
	int n, m, i, j, c = 0, min = 11111;
	scanf("%d\n%d", &n, &m);
	for (i = n; i <= m; i++) {
		j = sqrt(i);
		if (j*j == i) {
			c += i;
			if (i < min) min = i;
		}
	}
	if (min == 11111) printf("-1");
	else printf("%d\n%d", c, min);
}
