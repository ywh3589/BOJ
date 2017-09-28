#include <cstdio>

using namespace std;

int main() {
	int n, i;
	long long a[101];
	a[1] = a[2] = a[3] = 1;
	a[4] = a[5] = 2;
	for (i = 6; i <= 100; i++) a[i] = a[i - 1] + a[i - 5];
	scanf("%d", &n);
	while (n--) {
		scanf("%d", &i);
		printf("%lld\n", a[i]);
	}
}
