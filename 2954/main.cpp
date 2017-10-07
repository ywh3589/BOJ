#include <cstdio>
#include <cstring>

using namespace std;

int main() {
	char s[128];
	int l, i;
	scanf("%[^\n]", s);
	l = strlen(s);
	for (i = 0; i < l; i++) {
		printf("%c", s[i]);
		if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') {
			i += 2;
		}
	}
}