#include <cstdio>
#include <algorithm>

using namespace std;

int main() {
	int i, a[5], s = 0;
	for (i = 0; i < 5; i++) {
		scanf("%d", &a[i]);
		s += a[i];
	}
	sort(a, a + 5);
	printf("%d\n%d", s / 5, a[2]);
}