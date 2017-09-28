#include <cstdio>
#include <algorithm>

using namespace std;

int main() {
	int a, b, c, i, j, s, e, t[111];
	fill(t, t + 110, 0);
	scanf("%d %d %d", &a, &b, &c);
	for (i = 0; i < 3; i++) {
		scanf("%d %d", &s, &e);
		for (j = s-1; j < e-1; j++) t[j]++;
	}
	for (i = 0, j = 0; i <= 100; i++) {
		if (t[i] == 0) continue;
		else if (t[i] == 1) j += a;
		else if (t[i] == 2) j += 2 * b;
		else j += 3 * c;
	}
	printf("%d", j);
}
