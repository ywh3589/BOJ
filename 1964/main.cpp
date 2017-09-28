#include <cstdio>

using namespace std;

int main() {
	long long a;
	scanf("%lld", &a);
	a = ((3 * a*a) + (5 * a) + 2) / 2;
	printf("%lld", a % 45678);
}
