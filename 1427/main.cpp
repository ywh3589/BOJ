#include <cstdio>
#include <algorithm>

using namespace std;

int main() {
	int n, i, a[10];
	fill(a, a + 10, 0);
	scanf("%d", &n);
	if (n == 0) {
		printf("0");
		return 0;
	}
	for (i = 1; i <= n; i *= 10) {
		a[(n / i) % 10]++;
	}
	for (i = 9; i >= 0;) {
		if (!a[i]) {
			i--;
			continue;
		}
		printf("%d", i);
		a[i]--;
	}
}
