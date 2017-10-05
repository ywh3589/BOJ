#include <cstdio>
#include <algorithm>

using namespace std;

int main() {
	int n, i, p = 0, a[1000], m = 0;
	scanf("%d %d", &n, &a[0]);
	for (i = 1; i < n; i++) {
		scanf("%d", &a[i]);
		if (a[i] <= a[i - 1]) p = i;
		else {
			if (m < a[i] - a[p]) m = a[i] - a[p];
		}
	}
	printf("%d", m);
}