#include <cstdio> 

using namespace std;

int main() {
	int n, i, j;
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		for (j = 0; j < i; j++) printf("*");
		printf("\n");
	}
	for (i = n-1; i >= 1; i--) {
		for (j = 0; j < i; j++) printf("*");
		printf("\n");
	}
}