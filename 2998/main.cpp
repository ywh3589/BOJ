#include <cstdio>
#include <cstring>

using namespace std;

int main() {
	int l, i, j, k;
	char s[111];
	scanf("%s", s);
	l = strlen(s);
	i = l % 3;
	if (!i) i += 3;
	for (; i <= l; i += 3) {
		for (j = (i - 3 < 0) ? 0 : i - 3, k = 0; j < i; j++) k = 2 * k + (int)(s[j] - '0');
		printf("%d", k);
	}
}
