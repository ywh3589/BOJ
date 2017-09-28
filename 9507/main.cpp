#include <cstdio>
#include <algorithm>

using namespace std;

int main() {
	int n, a, i;
	long long f[70];
	f[0] = f[1] = 1;
	f[2] = 2;
	f[3] = 4;
	for(i = 4; i < 69; i++) f[i] = f[i - 1] + f[i - 2] + f[i - 3] + f[i - 4];
	scanf("%d", &n);
	while (n--) {
		scanf("%d", &a);
		printf("%lld\n", f[a]);
	}
}
