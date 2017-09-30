#include <cstdio> 

using namespace std;

int main() {
	int n, m, i;
	scanf("%d", &n);
	for (i = 10; i < n; i *= 10) {
		m = (n / (i / 10)) % 10;
		n = i*(n / i);
		if (m >= 5) n += i;
	}
	printf("%d", n);
}
