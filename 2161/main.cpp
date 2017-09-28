#include <cstdio>

using namespace std;

int main() {
	int n, i, p, a[2048];
	scanf("%d", &n);
	p = n;
	for (i = 1; i <= n; i++) a[i] = i;
	for (i = 1; i <= 2 * n; i += 2) {
		printf("%d ", a[i]);
		a[++p] = a[i + 1];
	}
}
