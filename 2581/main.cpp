#include <cstdio>

using namespace std;

int main() {
	int m, n, s = 0, i, j, min = 12345;
	scanf("%d\n%d", &m, &n);
	for (i = m; i <= n; i++) {
		for (j = 2; j < i; j++) {
			if (!(i%j)) break;
		}
		if (i == j) {
			s += i;
			if (min > i) min = i;
		}
	}
	if (min == 12345) printf("-1");
	else printf("%d\n%d", s, min);
}
