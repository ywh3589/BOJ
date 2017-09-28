#include <cstdio>

using namespace std;

int main() {
	int n, k, i, a, b, tp;
	scanf("%d", &n);
	while (n--) {
		scanf("%d", &k);
		if (k == 0) printf("1 0\n");
		else {
			a = 0;
			b = 1;
			for (i = 1; i < k; i++) {
				tp = b;
				b += a;
				a = tp;
			}
			printf("%d %d\n", a, b);
		}
	}
}
