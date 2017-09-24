#include <cstdio>
#include <cstring>

using namespace std;

int main() {
	int N, i, j;
	scanf("%d", &N);
	for (i = N; i >= 1; i--) {
		for (j = 0; j < i; j++) printf("*");
		printf("\n");
	}
}