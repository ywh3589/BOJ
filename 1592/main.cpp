#include <cstdio>

using namespace std;

int gcd(int a, int b) {
	if (b) return gcd(b, a%b);
	return a;
}

int main() {
	int n, m, l;
	scanf("%d %d %d", &n, &m, &l);
	printf("%d\n", n*(m - 1) / gcd(n, l));
}
