#include<cstdio>
#include<cstring>

using namespace std;

int main() {
	int n, m, i, j;
	long long c = 0;
	char p[1 << 14], q[1 << 14];
	scanf("%s %s", p, q);
	n = strlen(p);
	m = strlen(q);
	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) c += (int)(p[i] - '0')*(int)(q[j] - '0');
	}
	printf("%lld", c);
}