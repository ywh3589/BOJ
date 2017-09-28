#include <cstdio>

using namespace std;

int main() {
	int e, s, m, i, j, k, l = 1;
	scanf("%d %d %d", &e, &s, &m);
	i = j = k = 1;
	while (!(i == e && j == s && k == m)) {
		i = (i == 15) ? 1 : i + 1;
		j = (j == 28) ? 1 : j + 1;
		k = (k == 19) ? 1 : k + 1;
		l++;
	}
	printf("%d", l);
}
