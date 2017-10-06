#include <cstdio>

using namespace std;

int main() {
	int i, a[9], p, q;
	p = q = 1;
	for (i = 1; i <= 8; i++) {
		scanf("%d", a + i);
		if (a[i] != i) p = 0;
		if (a[i] != 9 - i) q = 0;
	}
	if (p) printf("ascending");
	else if (q) printf("descending");
	else printf("mixed");
}