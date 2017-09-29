#include <cstdio>

using namespace std;

int main() {
	int n, i;
	long long a[50];
	scanf("%d", &n);
	for (i = 0; i < n; i++) scanf("%lld", &a[i]);
	if (a[n - 1] - a[n - 2] == a[n - 2] - a[n - 3]) printf("%lld", 2 * a[n - 1] - a[n - 2]);
	else printf("%lld", a[n - 1] * a[n - 1] / a[n - 2]);
}
