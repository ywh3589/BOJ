#include <cstdio>
#include <algorithm>

using namespace std;

int main() {
	int n, m, i, a[10000];
	scanf("%d", &n);
	while(n--) {
		scanf("%d", &m);
		for(i = 0; i < m; i++) scanf("%d", &a[i]);
		printf("%d", (m + 1) / 2);
		for (i = 0; i < m; i += 2) {
			sort(a, a + i + 1);
			if (i % 20 == 0) printf("\n");
			printf("%d ", a[i/2]);
		}
		printf("\n");
	}
}