#include <cstdio>
#include <algorithm>

using namespace std;

int main() {
	int i, j, s = 0, a[8], b[8];
	for (i = 0; i < 8; i++) {
		scanf("%d", &a[i]);
		b[i] = a[i];
	}
	sort(b, b + 8);
	for (i = 7; i > 2; i--) s += b[i];
	printf("%d\n", s);
	for (i = 0; i < 8; i++) {
		for (j = 7; j > 2; j--) {
			if (a[i] == b[j]) {
				printf("%d ", i + 1);
				break;
			}
		}
	}
}