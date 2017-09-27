#include <cstdio>
#include <algorithm>

using namespace std;

int main() {
	int a[26], n, i, f = 0;
	char s[32];
	fill(a, a + 26, 0);
	scanf("%d", &n);
	while (n--) {
		scanf("%s", s);
		a[(int)(s[0] - 'a')]++;
	}
	for (i = 0; i < 26; i++) {
		if (a[i] >= 5) {
			printf("%c", (char)(i + 97));
			f = 1;
		}
	}
	if (!f) printf("PREDAJA");
}
