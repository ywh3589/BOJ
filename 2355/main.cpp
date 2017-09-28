#include <cstdio>
#include <algorithm>

using namespace std;

int main() {
	long long a, b;
	scanf("%lld %lld", &a, &b);
	if (a > b)swap(a, b);
	printf("%lld", (a + b)*(b - a + 1) / 2);
}
