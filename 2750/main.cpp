#include <cstdio>
#include <algorithm>

using namespace std;

int main() {
	int n, i, a[1001];
	scanf("%d", &n);
	for (i = 0; i < n; i++) scanf("%d", &a[i]);
	sort(a, a + n);
	for (i = 0; i < n; i++) printf("%d\n", a[i]);
}
