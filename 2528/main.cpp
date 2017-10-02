#include <cstdio> 

using namespace std;

struct bar {
	int l;
	int d;
}B[3000];

int main() {
	int N, L, i, t, p, q;
	scanf("%d %d", &N, &L);
	for (i = 0; i < N; i++) scanf("%d %d", &B[i].l, &B[i].d);
	for (i = 0, t = 0; i < N-1; ) {
		if (B[i].d == 0) p = t % (L - B[i].l+1);
		else p = (L - B[i].l) - t % (L - B[i].l + 1);
		if (B[i+1].d == 0) q = t % (L - B[i+1].l + 1);
		else q = (L - B[i+1].l) - t % (L - B[i+1].l + 1);
		if ((p <= q && q <= p + B[i].l) || (p <= q + B[i + 1].l && q + B[i + 1].l <= p + B[i].l)
			|| (p <= q && q+B[i+1].l <= p+B[i].l) || (q <= p && p + B[i].l <= q + B[i+1].l)) i++;
		else t++;
	}
	printf("%d", t);
}