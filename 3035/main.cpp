#include<cstdio>

using namespace std;

int main() {
	int r, c, a, b, i, j, k, l;
	char s[64][64];
	scanf("%d %d %d %d", &r, &c, &a, &b);
	for (i = 0; i < r; i++) scanf("%s", s[i]);
	for (i = 0; i < r; i++) {
		for (j = 0; j < a; j++) {
			for (k = 0; k < c; k++) {
				for (l = 0; l < b; l++) printf("%c", s[i][k]);
			}
			printf("\n");
		}
	}
}