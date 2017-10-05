#include <cstdio>

using namespace std;

int main() {
	int n, d[5000], i, j, f, c = 0;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &d[i]);
		d[i]--;
		f = 0;
		for (j = 1; j < i; j++) {
			if (d[i] % d[j] == 0) {
				f = 1;
				break;
			}
		}
		if (!f) c++;
	}
	printf("%d", c - 1);
}