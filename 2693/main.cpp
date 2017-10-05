#include <cstdio>
#include <algorithm>

using namespace std;

int main() {
	int n, i, a[10];
	scanf("%d", &n);
	while(n--) {
		for (i = 0; i < 10; i++) scanf("%d", &a[i]);
		sort(a, a + 10);
		printf("%d\n", a[7]);
	}
}