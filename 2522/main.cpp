#include <cstdio> 

using namespace std;

int main() {
	int n, i, j;
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		for (j = n - i; j > 0; j--) printf(" ");
		for (j = n - i; j < n; j++) printf("*");
		printf("\n");
	}
	for (i = 1; i < n; i++) {
		for (j = 0; j < i; j++) printf(" ");
		for (j = 0; j < n-i; j++) printf("*");
		printf("\n");
	}
}