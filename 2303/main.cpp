#include <cstdio> 

using namespace std;

int main() {
	int n, i, j, k, l, s, max = -1, p = -1, a[5];
	scanf("%d", &n);
	for (l = 1; l <= n; l++) {
		for (i = 0; i < 5; i++) scanf("%d", &a[i]);
		for (i = 0; i < 5; i++) {
			for (j = 0; j < 5; j++) {
				if (j == i) continue;
				for (k = 0; k < 5; k++) {
					if (k == i || k == j) continue;
					s = (a[i] + a[j] + a[k]) % 10;
					if (max <= s) {
						max = s;
						p = l;
					}
				}
			}
		}
	}
	printf("%d", p);
}
