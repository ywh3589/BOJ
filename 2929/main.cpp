#include <cstdio>
#include <cstring>

using namespace std;

int main() {
	char s[256];
	int i, j, l, c = 0;
	scanf("%s", s);
	l = strlen(s);
	for (i = 0, j = 3; i < l; i++) {
		if (s[i] >= 'A' && s[i] <= 'Z') {
			if ((j + 1) % 4) {
				c += (4 - (j + 1) % 4);
			}
			j = 0;
		}
		else j++;
	}
	printf("%d", c);
}