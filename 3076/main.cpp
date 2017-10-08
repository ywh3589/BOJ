#include<cstdio>

using namespace std;

int main() {
	int a, b, c, d, i, j, k, l;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	for (i = 0; i < a; i++) {
		for (j = 0; j < c; j++) {
			for (k = 0; k < b; k++) {
				for (l = 0; l < d; l++) {
					printf("%c", ((i+k) % 2) ? '.' : '#');
				}
			}
			printf("\n");
		}
	}
}