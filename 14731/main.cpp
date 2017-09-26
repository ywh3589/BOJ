#include <cstdio>
#include <cstring>
#define mod 1000000007

using namespace std;

int main() {
	int n;
	long long a, b, c, d, s = 0;
	scanf("%d", &n);
	while (n--) {
		scanf("%lld %lld", &a, &b);
		a = (a*b)%mod;
		if (b <= 1) {
			s = (s + a) % mod;
			continue;
		}
		b--;
		c = 2;
		d = 1;
		while (b) {
			if (b % 2) d = (c * d) % mod;
			c = (c*c) % mod;
			b /= 2;
		}
		s = (s + a*d) % mod;
	}
	printf("%lld", s);
}
