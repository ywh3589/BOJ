#include <cstdio>

using namespace std;

int main() {
	long long a, f[1500001];
	scanf("%lld", &a);
	f[0] = 0;
	f[1] = 1;
	a %= 1500000;
	for (int i = 2; i <= a; i++) {
		f[i] = (f[i - 1] + f[i - 2]) % 1000000;
	}
	printf("%d", f[a]);
}