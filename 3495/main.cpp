#include<cstdio>

using namespace std;

int main() {
	int r, c, i, j, A = 0, p, q, ii, jj;
	char m[128][128];
	scanf("%d %d", &r, &c);
	for (i = 0; i < r; i++) scanf("%s", m[i]);
	for (i = 0; i < c; i++) {
		p = 1;
		q = ii = jj = 0;
		for (j = 0; j < r; j++) {
			if (m[j][i] == '/' || m[j][i] == '\\') {
				if (p) {
					if (!q) {
						ii = j;
						q = 1;
					}
					else {
						jj = j;
						A += jj - ii;
						p = 0;
					}
				}
				else {
					ii = j;
					p = 1;
				}
			}
		}
	}
	printf("%d", A);
}