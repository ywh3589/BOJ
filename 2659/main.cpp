#include <cstdio>

using namespace std;

int cal(int n) {
	int i, a = n;
	for (i = 0; i < 3; i++) {
		if ((n = n / 1000 + n % 1000 * 10) < a) a = n;
	}
	return a;
}

int main() {
	int a, b, c, d, n, i, r = 0;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	n = 1000 * a + 100 * b + 10 * c + d;
	n = cal(n);
	for (i = 1111; i <= n; i++) {
		if (cal(i) == i) r++;
	}
	printf("%d", r);
}