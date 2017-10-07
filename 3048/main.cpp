#include<cstdio>

using namespace std;

int main() {
	int n, m, t, i;
	char p[64], q[64];
	scanf("%d %d %s %s %d", &n, &m, p, q, &t);
	for (i = 0; i < m && i <= t - n; i++) printf("%c", q[i]);
	for (i = n-1; i >= 0; i--) {
		printf("%c", p[i]);
		if(t >= i && t < m+i) printf("%c", q[t-i]);
	}
	for (i = t+1; i < m; i++) printf("%c", q[i]);
}