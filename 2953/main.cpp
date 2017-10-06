#include <cstdio>

using namespace std;

int main() {
	int i, j, k, s, m = 0, p = 0;
	for (i = 1; i <= 5; i++) {
		s = 0;
		for (j = 0; j < 4; j++) {
			scanf("%d", &k);
			s += k;
		}
		if (m < s) {
			m = s;
			p = i;
		}
	}
	printf("%d %d", p, m);
}