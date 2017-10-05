#include <cstdio>
#include <algorithm>

using namespace std;

int main() {
	int n, i, j, a[3], r[3][6];
	scanf("%d", &n);
	while(n--) {
		scanf("%d:%d:%d", &a[0], &a[1], &a[2]);
		for (i = 0; i < 3; i++) {
			fill(r[i], r[i] + 6, 0);
			for (j = 5; a[i]; j--) {
				r[i][j] = (a[i]%2) ? 1 : 0;
				a[i] /= 2;
			}
		}
		for (i = 0; i < 6; i++) {
			for (j = 0; j < 3; j++) {
				printf("%d", r[j][i]);
			}
		}
		printf(" ");
		for (i = 0; i < 3; i++) {
			for (j = 0; j < 6; j++) {
				printf("%d", r[i][j]);
			}
		}
		printf("\n");
	}
}