#include <cstdio>

using namespace std;

int main() {
	int n, m;
	scanf("%d", &n);
	while (scanf("%d", &m) && m) {
		if (m%n) printf("%d is NOT a multiple of %d.\n", m, n);
		else printf("%d is a multiple of %d.\n", m, n);
	}
}
