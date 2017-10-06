#include <cstdio>
#include <algorithm>

using namespace std;

int main() {
	int r, c, i, j, k, a[10], b[50];
	char s[64];
	scanf("%d %d", &r, &c);
	fill(b, b + 50, 0);
	for (i = 0, k = 1; i < r; i++) {
		scanf("%s", s);
		for (j = c - 1; j >= 0; j--) {
			if (s[j] >= '1' && s[j] <= '9') {
				a[(int)(s[j] - '0')] = j;
				b[j] = 1;
				break;
			}
		}
	}
	for (i = 1; i < 10; i++) {
		for (j = c, k = 0; j >= 1; j--) {
			if (b[j]) k++;
			if (a[i] == j) {
				printf("%d\n", k);
				break;
			}
		}
	}
}