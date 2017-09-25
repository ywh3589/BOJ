#include <cstdio>
#include <cstring>

using namespace std;

int A[1001];

int main() {
	int n, q, i, p, a, b, c, d, s1, s2, tp;
	scanf("%d %d", &n, &q);
	for (i = 1; i <= n; i++) scanf("%d", &A[i]);
	while (q--) {
		scanf("%d", &p);
		if (p == 2) {
			scanf("%d %d %d %d", &a, &b, &c, &d);
			s1 = s2 = 0;
			for (i = a; i <= b; i++) s1 += A[i];
			for (i = c; i <= d; i++) s2 += A[i];
			printf("%d\n", s1 - s2);
		}
		else {
			scanf("%d %d", &a, &b);
			s1 = 0;
			for (i = a; i <= b; i++) s1 += A[i];
			tp = A[a];
			A[a] = A[b];
			A[b] = tp;
			printf("%d\n", s1);
		}
	}

}
