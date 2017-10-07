#include <cstdio>
#include <algorithm>

using namespace std;

int main() {
	int n, k, i, j, a[1001], c = 0;
	scanf("%d %d", &n, &k);
	fill(a, a + n+1, 0);
	for (i = 2; i <= n; i++) {
		if (a[i]) continue;
		for (j = i; j <= n; j += i) {
			if (a[j]) continue;
			a[j] = 1;
			if (++c == k) {
				printf("%d", j);
				return 0;
			}
		}
	}
}