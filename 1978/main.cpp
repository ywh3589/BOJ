#include <cstdio>

using namespace std;

int main() {
	int n, m, i, c;
	scanf("%d", &n);
	c = n;
	while (n--) {
		scanf("%d", &m);
		if (m == 1) {
			c--;
			continue;
		}
		for (i = 2; i < m; i++) {
			if (m%i) continue;
			c--;
			break;
		}
	}
	printf("%d", c);
}
