#include <cstdio>

using namespace std;

int main() {
	int i;
	long long f[91] = { 0, 1 };
	for (i = 2; i <= 90; i++) f[i] = f[i - 1] + f[i - 2];
	scanf("%d", &i);
	printf("%lld", f[i]);
}
