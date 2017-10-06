#include <cstdio>
#include <cstring>

using namespace std;

int main() {
	char s[128];
	int l, i, c = 0;
	scanf("%s", s);
	l = strlen(s);
	s[l] = '\0';
	s[l + 1] = '\0';
	for (i = 0; i < l; ) {
		if (s[i] == 'c' && (s[i + 1] == '=' || s[i + 1] == '-')) {
			i += 2;
			c++;
		}
		else if (s[i] == 'd') {
			if (s[i + 1] == '-') {
				i += 2;
				c++;
			}
			else if (s[i + 1] == 'z' && s[i + 2] == '=') {
				i += 3;
				c++;
			}
		}
		else if ((s[i] == 'l' || s[i] == 'n') && s[i + 1] == 'j') {
			i += 2;
			c++;
		}
		else if ((s[i] == 's' || s[i] == 'z') && s[i + 1] == '=') {
			i += 2;
			c++;
		}
		else {
			i++;
			c++;
		}
	}
	printf("%d", c);
}