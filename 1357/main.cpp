#include <cstdio>

using namespace std;

int rev(int n) {
	if (n < 10) return n;
	else if (n < 100) return 10 * (n % 10) + n / 10;
	else if (n < 1000) return 100 * (n % 10) + 10 * ((n / 10) % 10) + n / 100;
	else return 1000 * (n % 10) + 100 * ((n / 10) % 10) + 10*((n / 100)%10) + n / 1000;
}

int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d", rev(rev(a) + rev(b)));
}
