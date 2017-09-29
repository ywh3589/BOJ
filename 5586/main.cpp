#include <cstdio>

using namespace std;

int main() {
	int a, b, i;
	char s[11111];
	scanf("%s", s);
	a = b = 0;
	for (i = 2; s[i] > 0; i++) {
		if (!(s[i] == 'I' && s[i - 1] == 'O')) continue;
		if (s[i - 2] == 'J') a++;
		else if (s[i - 2] == 'I') b++;
	}
	printf("%d\n%d", a, b);
}
