#include <cstdio>
#include <algorithm>

using namespace std;

int main() {
	int n, a[9], MAX = 0;
	scanf("%d", &n);
	fill(a, a + 9, 0);
	while (n) {
		if (n % 10 == 9) a[6]++;
		else a[n % 10]++;
		n /= 10;
	}
	for (int i = 0; i < 9; i++) {
		if (i == 6) MAX = max(MAX, a[i] / 2 + ((a[i]%2) ? 1 : 0));
		else MAX = max(MAX, a[i]);
	}
	printf("%d", MAX);
}
