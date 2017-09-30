#include <cstdio> 

using namespace std;

int main() {
	int n, a, b, c, s, max = 0;
	scanf("%d", &n);
	while (n--) {
		scanf("%d %d %d", &a, &b, &c);
		if (a == b && b == c) s = 10000 + a * 1000;
		else if (a == b) s = 1000 + a * 100;
		else if (b == c) s = 1000 + b * 100;
		else if (a == c) s = 1000 + c * 100;
		else {
			b = (a > b) ? a : b;
			c = (c > b) ? c : b;
			s = 100 * c;
		}
		if (max < s) max = s;
	}
	printf("%d", max);
}