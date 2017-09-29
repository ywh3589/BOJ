#include <cstdio>

using namespace std;

int main() {
	int n, i, c = 0;
	scanf("%d", &n);
	for (i = 1; i <= n; i *= 10) c += n - i + 1;
	printf("%d", c);
}
