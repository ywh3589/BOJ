#include <cstdio> 

using namespace std;

bool pn(int n) {
	if (n <= 1) return false;
	for (int i = 2; i*i <= n; i++) if (n%i == 0) return false;
	return true;
}

void sol(int n, int p) {
	if (!p) printf("%d\n", n);
	for (int i = 1; i <= 9; i++) if (pn(10 * n + i)) sol(10 * n + i, p - 1);
}

int main() {
	int n;
	scanf("%d", &n);
	sol(0, n);
}
