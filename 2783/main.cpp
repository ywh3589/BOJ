#include <cstdio>
#include <algorithm>

using namespace std;

int main() {
	int n, x, y, i;
	float p[101];
	scanf("%d %d %d", &x, &y, &n);
	p[0] = x * 1000 / (float)y;
	for (i = 1; i <= n; i++) {
		scanf("%d %d", &x, &y);
		p[i] = x * 1000 / (float)y;
	}
	sort(p, p + n + 1);
	printf("%.2f", p[0]);
}