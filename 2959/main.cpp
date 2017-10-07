#include <cstdio>
#include <algorithm>

using namespace std;

int main() {
	int i, a[4];
	for (i = 0; i < 4; i++) scanf("%d", a + i);
	sort(a, a + 4);
	printf("%d", a[0] * a[2]);
}