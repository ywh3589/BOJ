#include <cstdio>
#include <algorithm>
#define MAX 2000001 

using namespace std;

int main() {
	bool a[MAX];
	int n, c, k, i;
	fill(a, a + MAX, false);
	scanf("%d %d", &n, &c);
	while (n--) {
		scanf("%d", &k);
		for (i = k; i <= c; i += k) a[i] = true;
	}
	n = 0;
	for (i = 0; i <= c; i++) if (a[i]) n++;
	printf("%d", n);
}
