#include<cstdio>
#include<cstring>
#include<algorithm>

using namespace std;

int main() {
	int t, l, a[26], c, i;
	char s[1024];
	scanf("%d", &t);
	while (t--) {
		scanf("%s", s);
		l = strlen(s);
		c = 2015;
		fill(a, a + 26, 0);
		for (i = 0; i < l; i++) a[(int)(s[i] - 'A')]++;
		for (i = 0; i < 26; i++) if (a[i]) c -= i + 65;
		printf("%d\n", c);
	}
}