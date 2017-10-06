#include <cstdio>
#include <cstring>
#include <algorithm>

using namespace std;

int main() {
	char s[51][64];
	int r, n, i, j, R, S, P, c = 0, mc = 0;
	scanf("%d\n%s\n%d", &r, s[0], &n);
	for (i = 1; i <= n; i++) scanf("%s", s[i]);
	for (i = 0; i < r; i++) {
		R = S = P = 0;
		for (j = 1; j <= n; j++) {
			if (s[j][i] == 'R') {
				R++;
				if (s[0][i] == 'R') c++;
				else if (s[0][i] == 'P') c += 2;
			}
			else if (s[j][i] == 'S') {
				S++;
				if (s[0][i] == 'S') c++;
				else if (s[0][i] == 'R') c += 2;
			}
			else {
				P++;
				if (s[0][i] == 'P') c++;
				else if (s[0][i] == 'S') c += 2;
			}
		}
		mc += max(max(S + 2 * P, 2 * S + R), 2 * R + P);
	}
	printf("%d\n%d", c, mc);
}