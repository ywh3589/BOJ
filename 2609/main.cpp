#include <cstdio>

using namespace std;

int gcd(int a, int b) {
	if (b) return gcd(b, a%b);
	return a;
}

int main() {
	int a, b, g;
	scanf("%d %d", &a, &b);
	g = gcd(a, b);
	printf("%d\n%d", g, a / g *b / g *g);
}