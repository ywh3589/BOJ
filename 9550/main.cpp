#include <cstdio>

using namespace std;

int main() {
	int t, n, k, i, c;
	scanf("%d", &t);
	while (t--) {
		scanf("%d %d", &n, &k);
		c = 0;
		while (n--) {
			scanf("%d", &i);
			c += i / k;
		}
		printf("%d\n", c);
	}
}
