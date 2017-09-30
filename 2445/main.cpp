#include <cstdio> 

using namespace std;

int main() {
	int n, i, j;
	scanf("%d", &n);
	for (i = n-2; i >= 0; i--) {
		for (j = n-1-i; j > 0; j--) printf("*");
		for (j = 0; j < 2 * i + 2; j++) printf(" ");
		for (j = n-1-i; j > 0; j--) printf("*");
		printf("\n");
	}
	for (i = 0; i < 2 * n; i++) printf("*");
	printf("\n");
	for (i = 0; i < n-1; i++) {
		for (j = n - 1 - i; j > 0; j--) printf("*");
		for (j = 0; j < 2 * i + 2; j++) printf(" ");
		for (j = n - 1 - i; j > 0; j--) printf("*");
		printf("\n");
	}
}
