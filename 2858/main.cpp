#include <cstdio>
#include <algorithm>

using namespace std;

int main() {
	int a, b, A, r, i;
	scanf("%d %d", &a, &b);
	A = a + b;
	r = (int)sqrt(A);
	for (i = 3; i <= r; i++) {
		if (A%i == 0 && (A/i-2)*(i-2) == b) {
			printf("%d %d", A / i, i);
			return 0;
		}
	}
}