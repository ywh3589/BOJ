#include <cstdio>

using namespace std;

int gcd(int a, int b) {
	if (b) return gcd(b, a%b);
	return a;
}

int main() {
	int n, a, b, g;
	scanf("%d", &n);
	while(n--) {
		scanf("%d %d", &a, &b);
		g = gcd(a, b);
		printf("%d %d\n", a/g *b/g *g, g);
	}
}