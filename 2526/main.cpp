#include <cstdio> 

using namespace std;

int main() {
	int n, p, i, j, a[10001];
	scanf("%d %d", &n, &p);
	a[0] = n;
	for (i = 1; ; i++) {
		a[i] = (n*a[i - 1]) % p;
		for (j = i - 1; j >= 0; j--) {
			if (a[j] == a[i]) {
				printf("%d", i - j);
				return 0;
			}
		}
	}
	
}