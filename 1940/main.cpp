#include <cstdio>

using namespace std;

int main() {
	int n, m, i, j, a[15001], c = 0;
	scanf("%d\n%d", &n, &m);
	for (i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	for (i = 0; i < n; i++) {
		for (j = i + 1; j < n; j++) {
			if (a[i] + a[j] == m) c++;
		}
	}
	printf("%d", c);
}
