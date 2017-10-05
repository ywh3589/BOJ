#include <cstdio>

using namespace std;

int main() {
	int t, n, i, c;
	scanf("%d", &t);
	while (t--) {
		scanf("%d", &n);
		if (n < 10) {
			printf("1\n");
			continue;
		}
		c = 0;
		for (i = 9; i >= 2; ) {
			if (!(n % i)) {
				n /= i;
				c++;
			}
			else i--;
		}
		printf("%d\n", (n == 1) ? c : -1);
	}
}