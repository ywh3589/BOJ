#include <cstdio>
#include <algorithm>

using namespace std;

int main() {
	int n, m, i, f[50] = { 1, 1 }, s = 1, tp = 0;
	for (i = 2; i < 50; i++) f[i] = f[i - 1] + f[i - 2];
	scanf("%d%d", &n, &m);
	while (m--) {
		scanf("%d", &i);
		s *= f[i - tp - 1];
		tp = i;
	}
	s *= f[n - tp];
	printf("%d", s);
}
