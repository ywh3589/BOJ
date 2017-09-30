#include <cstdio> 

using namespace std;

int main() {
	int d, k, i, j, f[31] = { 0, 0, 1 };
	for (i = 3; i <= 30; i++) f[i] = f[i - 1] + f[i - 2];
	scanf("%d %d", &d, &k);
	for (i = 1; ; i++) {
		j = (k - i*f[d - 1]);
		if (j %f[d] == 0) {
			printf("%d\n%d", i, j/f[d]);
			break;
		}
	}
}