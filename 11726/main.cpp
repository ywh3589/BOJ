#include <cstdio>

using namespace std;

int main() {
	int n, a[1001], i;
	scanf("%d", &n);
	a[0] = 1;
	a[1] = 2;
	for (i = 2; i < n; i++) a[i] = (a[i - 1] + a[i - 2]) % 10007;
	printf("%d", a[n - 1]);
}
