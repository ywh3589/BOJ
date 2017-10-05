#include <cstdio>

using namespace std;

int main() {
	int a, b, c, i, j, k, s, M[100][100], N[100][100];
	scanf("%d %d", &a, &b);
	for (i = 0; i < a; i++) 
		for (j = 0; j < b; j++) scanf("%d", &M[i][j]);
	scanf("%d %d", &b, &c);
	for (i = 0; i < b; i++) 
		for (j = 0; j < c; j++) 
			scanf("%d", &N[i][j]);
	for (i = 0; i < a; i++) {
		for (j = 0; j < c; j++) {
			s = 0;
			for (k = 0; k < b; k++) s += M[i][k] * N[k][j];
			printf("%d ", s);
		}
		printf("\n");
	}
}