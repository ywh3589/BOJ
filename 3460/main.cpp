#include<cstdio>

using namespace std;

int main() {
	int t, n, i;
	scanf("%d", &t);
	while (t--) {
		scanf("%d", &n);
		for (i = 0; n; i++) {
			if (n % 2) printf("%d ", i);
			n /= 2;
		}
		printf("\n");
	}
}