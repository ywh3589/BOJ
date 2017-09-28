#include <cstdio>

using namespace std;

int main() {
	int n, c = 1, k;
	scanf("%d", &n);
	while (n--) {
		scanf("%d", &k);
		c += (k - 1);
	}
	printf("%d", c);
}
