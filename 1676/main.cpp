#include <cstdio>

using namespace std;

int main() {
	int n, i, c = 0;
	scanf("%d", &n);
	for (i = 5; i <= n; i *= 5) {
		c += (n / i);
	}
	printf("%d", c);
}
