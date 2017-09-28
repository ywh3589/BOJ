#include <cstdio>

using namespace std;

int main() {
	int n;
	long long a, b, tp;
	scanf("%d", &n);
	a = b = 1;
	while (n-- > 2) {
		tp = a;
		a += b;
		b = tp;
	}
	printf("%lld", a);
}
