#include <cstdio>
#include <cstring>

using namespace std;

int main() {
	char s[128];
	int l, i, j, r, c;
	scanf("%s", s);
	l = strlen(s);
	for (i = 1; i <= l; i++) {
		if (l%i) continue;
		if (i > l / i) break;
		r = i;
		c = l / i;
	}
	for (i = 0; i < r; i++) {
		for (j = 0; j < c; j++) {
			printf("%c", s[i + r*j]);
		}
	}
}