#include <cstdio>

using namespace std;

int main() {
	int i, a1, r1, a2, r2, t[3];
	scanf("%d %d %d %d %d %d %d", &a1, &r1, &a2, &r2, t, t + 1, t + 2);
	for (i = 0; i < 3; i++) {
		if (t[i] % (a1 + r1) == 0 || t[i] % (a1 + r1) > a1) {
			if (t[i] % (a2 + r2) == 0 || t[i] % (a2 + r2) > a2) printf("0\n");
			else printf("1\n");
		}
		else {
			if (t[i] % (a2 + r2) == 0 || t[i] % (a2 + r2) > a2) printf("1\n");
			else printf("2\n");
		}
	}
}