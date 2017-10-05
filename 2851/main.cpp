#include <cstdio>
#include <cmath>

using namespace std;

int main() {
	int m = 9999, i, a, d, s = 0;
	for (i = 0; i < 10; i++) {
		scanf("%d", &a);
		s += a;
		d = abs(100 - s) - abs(m);
		if (d < 0 || (d == 0 && 100 - s < m)) m = 100 - s;
	}
	printf("%d", 100 - m);
}