#include <cstdio>
#include <cstring>

using namespace std;

int main() {
	char a[128], b[128], c;
	int p, q, i, tp;
	scanf("%s %c %s", a, &c, b);
	p = strlen(a);
	q = strlen(b);
	if (c == '+') {
		if (p == q) {
			printf("2");
			for (i = 0; i < p - 1; i++) printf("0");
		}
		else {
			if (p < q) {
				tp = p;
				p = q;
				q = tp;
			}
			printf("1");
			for (i = 0; i < p - q - 1; i++) printf("0");
			printf("1");
			for (i = 0; i < q - 1; i++) printf("0");
		}
	}
	else {
		printf("1");
		for (i = 0; i < p+ q - 2; i++) printf("0");
	}
}