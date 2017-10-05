#include <cstdio>
#include <cstring>

using namespace std;

int main() {
	int a, n, p, f, l, i;
	char s[1000];
	scanf("%d %s", &a, s);
	n = p = f = 0;
	l = strlen(s);
	for (i = 0; i < l-2; ) {
		if (s[i] == 'S') {
			n++;
			p++;
			i++;
		}
		else {
			n++;
			if (f) p++;
			else {
				p += 2;
				f = 1;
			}
			i += 2;
		}
	}
	if (i == l - 2) {
		if (s[i] == 'S') {
			p += 2;
			n += 3;
		}
		else {
			if (f) p++;
			else p += 2;
			n += 2;
		}
	}
	else if (i == l - 1) {
		p++;
		n += 2;
	}
	printf("%d", (n <= p) ? n : p);
}