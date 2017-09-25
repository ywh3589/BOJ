#include <cstdio>
#include <cstring>

using namespace std;

int main() {
	int n, p = 1, i = 1;
	scanf("%d", &n);
	while (p < n) p += ++i;
	printf("%d %d", (p - n) + 1, i - (p - n));
}

