#include<cstdio>
#include<algorithm>

using namespace std;

int main() {
	int a, b, c, h, n, i;
	scanf("%d %d %d", &a, &b, &c);
	h = abs(a - b);
	for (i = 0; i < c; i++) {
		scanf("%d", &n);
		h = min(h, abs(n - b) + 1);
	}
	printf("%d", h);
}