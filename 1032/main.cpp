#include <cstdio>
#include <cstring>

using namespace std;

int main() {
	int n, l, i, j, f;
	char s[60][60];
	scanf("%d", &n);
	for (i = 0; i < n; i++) scanf("%s", s[i]);
	l = strlen(s[0]);
	for (i = 0; i < l; i++) {
		f = 0;
		for (j = 0; j < n; j++) {
			if (s[0][i] != s[j][i]) {
				f = -1;
				break;
			}
		}
		printf("%c", (f) ? '?' : s[0][i]);
	}
}
