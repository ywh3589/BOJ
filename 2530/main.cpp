#include <cstdio> 

using namespace std;

int main() {
	int a, b, c, d;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	c += d % (60 * 60 * 24);
	b += c / 60;
	a += b / 60;
	printf("%d %d %d", a % 24, b % 60, c % 60);
}