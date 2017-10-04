#include <cstdio>

using namespace std;

int u[101];

int f(int v) {
	return v == u[v] ? v : u[v] = f(u[v]);
}

int main() {
	int n, m, i, j, c = 0;
	scanf("%d %d", &n, &m);
	for (i = 1; i <= n; i++) u[i] = i;
	while (m--) {
		scanf("%d %d", &i, &j);
		u[f(i)] = f(j);
	}
	for (i = 1; i <= n; i++) if (f(i) == f(1)) c++;
	printf("%d", c-1);
}