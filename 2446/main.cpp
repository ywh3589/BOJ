#include <cstdio> 

using namespace std;

int main() {
	int n, i, j;
	scanf("%d", &n);
	for (i = n-1; i > 0; i--) {
		for (j = n-1-i; j > 0; j--) printf(" ");
		for (j = 0; j < 2 * i + 1; j++) printf("*");
		printf("\n");
	}
	for (i = 0; i < n; i++) {
		for (j = n - 1 - i; j > 0; j--) printf(" ");
		for (j = 0; j < 2 * i + 1; j++) printf("*");
		printf("\n");
	}
}
