#include <cstdio>
#include <algorithm>

using namespace std;

int main() {
	int t, n, a[10], i, c;
	scanf("%d", &t);
	while (t--) {
		scanf("%d", &n);
		fill(a, a + 10, 0);
		while (n) {
			a[n % 10]++;
			n /= 10;
		}
		c = 0;
		for (i = 0; i < 10; i++) if (a[i]) c++;
		printf("%d\n", c);
	}
}