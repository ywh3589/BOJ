#include <cstdio>
#include <cstring>

using namespace std;

int main() {
	char s[128];
	int b, i, j, c = 0;
	scanf("%s %d", s, &b);
	for (i = strlen(s)-1, j = 1; i >= 0; i--) {
		if (s[i] >= 'A') c += (int)(s[i] - 55)*j;
		else c += (int)(s[i] - '0')*j;
		j *= b;
	}
	printf("%d", c);
}