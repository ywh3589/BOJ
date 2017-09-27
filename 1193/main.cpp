#include <cstdio>

using namespace std;

int main() {
	int n, a, b, i;
	scanf("%d", &n);
	for (i = 1; i < n;) n -= i++;
	a = n;
	b = i+1-n;
	if (i % 2) {
		int tp = a;
		a = b;
		b = tp;
	}
	printf("%d/%d", a, b);
}
