#include <cstdio> 

using namespace std;

int main() {
	int n, i, j, k;
	scanf("%d %d", &n, &k);
	for (i = 1, j = 0; i <= n; i++) {
		if (n%i) continue;
		if (++j == k) {
			printf("%d", i);
			return 0;
		}
	}
	printf("0");
}