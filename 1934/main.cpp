#include <cstdio> 

using namespace std;

int gcd(int a, int b) {
	if (b) return gcd(b, a%b);
	return a;
}

int main() {
	int t, a, b, g;
	scanf("%d", &t);
	while (t--) {
		scanf("%d %d", &a, &b);
		g = gcd(a, b);
		printf("%d\n", a /g * b);
	}
}
