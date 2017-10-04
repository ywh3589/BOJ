#include <cstdio>

using namespace std;

int a[1001];

int main() {
	int i, j, max = 0, p = 0, s = 0;
	for (i = 0; ~scanf("%d", &j); i++) {
		if (++a[j] > max) {
			max = a[j];
			p = j;
		}
		s += j;
	}
	printf("%d\n%d", s / 10, p);
}