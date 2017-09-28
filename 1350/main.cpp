#include <cstdio>
#include <algorithm>

using namespace std;

int main() {
	long long n, m, s[1001], c = 0;
	scanf("%lld", &n);
	for (int i = 0; i < n; i++) scanf("%lld", &s[i]);
	scanf("%lld", &m);
	for (int i = 0; i < n; i++) c += s[i] / m + ((s[i] % m) ? 1 : 0);
	printf("%lld", c*m);
}
