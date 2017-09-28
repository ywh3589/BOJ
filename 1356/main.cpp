#include <cstdio>
#include <cstring>

using namespace std;

int main() {
	char n[12];
	int L, i, j, a, b;
	scanf("%s", n);
	L = strlen(n);
	for (i = 0; i < L-1; i++) {
		a = b = 1;
		for (j = 0; j <= i; j++) a *= (int)(n[j] - '0');
		for (j = i+1; j < L; j++) b *= (int)(n[j] - '0');
		if (a == b) {
			printf("YES");
			return 0;
		}
	}
	printf("NO");
}
