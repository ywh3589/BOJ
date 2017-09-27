#include <cstdio>

using namespace std;

int main() {
	int n, c = 0;
	scanf("%d", &n);
	while (n) {
		c += n % 2;
		n >>= 1;
	}
	printf("%d", c);
}
