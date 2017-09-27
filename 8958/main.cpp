#include <cstdio>
#include <algorithm>

using namespace std;

int main() {
	int c, n, s;
	char *p, str[100];
	scanf("%d", &n);
	while (n--) {
		scanf("%s", str);
		p = str;
		c = 0;
		s = 0;
		while (*p > 0) {
			if (*p++ == 'O') {
				++c;
				s += c;
			}
			else c = 0;
		}
		printf("%d\n", s);
	}
}
