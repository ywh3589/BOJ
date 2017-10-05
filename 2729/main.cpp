#include <cstdio>
#include <algorithm>
#include <cstring>

using namespace std;

int main() {
	int n, i, j;
	char a[100], b[100], c[100];
	scanf("%d", &n);
	while(n--) {
		scanf("%s %s", a, b);
		fill(c, c + 100, '0');
		for (i = strlen(a) - 1, j = 0; i >= 0; i--) c[j++] = a[i];
		for (i = strlen(b) - 1, j = 0; i >= 0; i--) {
			c[j++] += (b[i] - '0');
		}
		for (i = 0; i < 100; i++) {
			if (c[i] >= '2') {
				c[i + 1]++;
				c[i] -= 2;
			}
		}
		for (j = 99; j >= 0; j--) if (c[j] == '1') break;
		if (j == -1) printf("0\n");
		else {
			for (i = j; i >= 0; i--) printf("%c", c[i]);
			printf("\n");
		}
	}
}