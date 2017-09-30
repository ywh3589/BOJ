#include <cstdio> 
#include <algorithm>

using namespace std;

int gcd(int a, int b) {
	if (b) return gcd(b, a%b);
	return a;
}

int main() {
	int n, i, a[100001], d;
	scanf("%d", &n);
	for (i = 0; i < n; i++) scanf("%d", &a[i]);
	sort(a, a + n);
	d = a[1] - a[0];
	for (i = 2; i < n; i++) d = gcd(d, a[i] - a[i - 1]);
	printf("%d", (a[n - 1] - a[0]) / d - n + 1);
}