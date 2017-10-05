#include <cstdio>

using namespace std;

int main() {
	int r, c, i, j;
	char s[10];
	while (~scanf(" R%dC%d", &r, &c)) {
		if (r == 0 && c == 0) break;
		c--;
		for (i = 0; c >= 0; i++) {
			s[i] = 'A' + c % 26;
			c = (c/26)-1;
		}
		for (j = i - 1; j >= 0; j--) printf("%c", s[j]);
		printf("%d\n", r);
	}
}