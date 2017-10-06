#include <cstdio>
#include <algorithm>

using namespace std;

int main() {
	int a, b, c, n, r[1000], i, res = 0;
	scanf("%d %d %d", &a, &b, &c);
	fill(r, r + a, 1);
	while (b--) {
		scanf("%d", &n);
		r[n - 1]--;
	}
	while (c--) {
		scanf("%d", &n);
		r[n - 1]++;
	}
	for (i = 0; i < a; i++) {
		if (r[i] == 0) {
			if (i == 0) {
				if (r[1] == 2) {
					r[1]--;
					r[0]++;
				}
				else res++;
			}
			else if (i == a - 1) {
				if (r[a - 2] == 2) {
					r[a - 2]--;
					r[a - 1]++;
				}
				else res++;
			}
			else {
				if (r[i - 1] == 2) {
					r[i - 1]--;
					r[i]++;
				}
				else if (r[i + 1] == 2) {
					r[i + 1]--;
					r[i]++;
				}
				else res++;
			}
		}
	}
	printf("%d", res);
}