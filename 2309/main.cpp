#include <cstdio> 
#include <algorithm>

using namespace std;

int main() {
	int i, j, k, s, a[9];
	for (i = 0; i < 9; i++) scanf("%d", &a[i]);
	sort(a, a + 9);
	for (i = 0; i < 9; i++) {
		for (j = i+1; j < 9; j++) {
			s = 0;
			for (k = 0; k < 9; k++) {
				if (k == i || k == j) continue;
				s += a[k];
			}
			if (s != 100) continue;
			for (k = 0; k < 9; k++) {
				if (k != i && k != j) printf("%d\n", a[k]);
			}
			return 0;
		}
	}
}
