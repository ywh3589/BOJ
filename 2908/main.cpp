#include <cstdio>

using namespace std;

int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	a = 100 * (a % 10) + 10 * ((a / 10) % 10) + a / 100;
	b = 100 * (b % 10) + 10 * ((b / 10) % 10) + b / 100;
	printf("%d", (a < b) ? b : a);
}
