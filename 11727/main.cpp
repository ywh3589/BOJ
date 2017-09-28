#include <cstdio>

using namespace std;

int main() {
	int n, i, a = 1;
	scanf("%d", &n);
	for (i = 2; i <= n; i++) {
		if (i % 2) a = (2 * a - 1) % 10007;
		else a = (2 * a + 1) % 10007;
	}
	printf("%d", a);
}
