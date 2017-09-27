#include <cstdio>

using namespace std;

int main() {
	int a, b, c, d[10];
	scanf("%d\n%d\n%d", &a, &b, &c);
	a *= b*c;
	for (b = 0; b < 10; b++) d[b] = 0;
	for (b = 1; b < a; b *= 10) d[(a / b) % 10]++;
	for (b = 0; b < 10; b++) printf("%d\n", d[b]);
}
