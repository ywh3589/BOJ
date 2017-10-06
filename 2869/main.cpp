#include <cstdio>

using namespace std;

int main() {
	int a, b, c, h, d;
	scanf("%d %d %d", &a, &b, &c);
	h = d = 0;
	while(c > h) {
		d++;
		h += a;
		if (c <= h) break;
		h -= b;
	}
	printf("%d", d);
}