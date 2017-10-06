#include <cstdio>

using namespace std;

int main() {
	int n, m = 1, c = 0;
	scanf("%d", &n);
	while (n > m) m *= 2;
	printf("%d ", m);
	while (n) {
		if (n == m) break;
		else if (n > m) n -= m;
		m /= 2;
		c++;
	}
	printf("%d", c);
}