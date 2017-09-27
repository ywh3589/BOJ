#include <cstdio>

using namespace std;

int main() {
	int n, m, i;
	scanf("%d", &n);
	for (m = 1, i = 1; m < n; ) {
		m += 6 * i++;
	}
	printf("%d", i);
}
