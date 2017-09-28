#include <cstdio>

using namespace std;

int sol(int n, int a, int b) {
	int i = 1, o = 0;
	while (n) {
		if (n % 10 == a) {
			o += b*i;
		}
		else o += (n % 10)*i;
		i *= 10;
		n /= 10;
	}
	return o;
}

int main() {
	int n, m;
	scanf("%d %d", &n, &m);
	printf("%d %d", sol(n, 6, 5) + sol(m, 6, 5), sol(n, 5, 6) + sol(m, 5, 6));
}
