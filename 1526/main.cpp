#include <cstdio>

using namespace std;

bool chk(int n) {
	while (n) {
		if (!(n % 10 == 4 || n % 10 == 7)) return false;
		n /= 10;
	}
	return true;
}

int main() {
	int n, i;
	scanf("%d", &n);
	for (i = n; i >= 4; i--) {
		if (chk(i)) {
			printf("%d", i);
			break;
		}
	}
}
