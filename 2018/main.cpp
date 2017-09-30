#include <cstdio> 

using namespace std;

int main() {
	int n, i, c = 0, s = 0;
	scanf("%d", &n);
	for (i = 1; s <= n; i++) {
		s += i;
		if ((n - s) >= 0 && (n - s) % i == 0) c++;
	}
	printf("%d", c);
}
