#include <cstdio>
#include <cstring>

using namespace std;

int main() {
	int N, i, j;
	scanf("%d", &N);
	for (i = 1; i <= N; i++) {
		for (j = 0; j < N-i; j++) printf(" ");
		for (j = 0; j < i; j++) printf("*");
		printf("\n");
	}
}