#include<cstdio>
#include<ctype.h>

using namespace std;

int main() {
	char c;
	int a[26], m = 0, i, j;
	for (i = 0; i < 26; i++) a[i] = 0;
	while (~scanf("%c ", &c)) {
		c = toupper(c);
		i = (int)c - 65;
		if (++a[i] > m) m = a[i];
	}
	for (i = 0, j = -1; i < 26; i++) {
		if (a[i] == m) {
			if (j == -1) j = i;
			else {
				printf("?");
				return 0;
			}
		}
	}
	printf("%c", (char)(j + 65));
}