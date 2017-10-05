#include <cstdio>
#include <cstring>

using namespace std;

int main() {
	char sn[128], in[3], s[13][3] = { "A+", "A0", "A-", "B+", "B0", "B-", "C+", "C0", "C-", "D+", "D0", "D-", "F" };
	float a[13] = { 4.3, 4.0, 3.7, 3.3, 3.0, 2.7, 2.3, 2.0, 1.7, 1.3, 1.0, 0.7, 0.0 }, v = 0;
	int n, m, i, j, tc = 0;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%s %d %s", sn, &m, in);
		tc += m;
		for (j = 0; j < 13; j++) {
			if (!strcmp(in, s[j])) {
				v += m*a[j];
				break;
			}
		}
	}
	printf("%.2f", v / tc);
}