#include <cstdio>
#include <algorithm>

using namespace std;

int main() {
	int n, i, k;
	scanf("%d\n%d", &n, &k);
	n = 100 * (n / 100);
	for (i = 0; i < 100; i++) {
		if ((n+i)%k) continue;
		if (i < 10) printf("0%d", i);
		else printf("%d", i);
		break;
	}
}
