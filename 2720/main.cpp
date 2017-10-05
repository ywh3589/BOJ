#include <cstdio>

using namespace std;

int main() {
	int n, m;
	scanf("%d", &n);
	while(n--) {
		scanf("%d", &m);
		printf("%d ", m / 25);
		m -= 25 * (m / 25);
		printf("%d ", m / 10);
		m -= 10 * (m / 10);
		printf("%d ", m / 5);
		m -= 5 * (m / 5);
		printf("%d\n", m);
	}
}