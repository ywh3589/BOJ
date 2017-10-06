#include <cstdio>
#include <cstring>

using namespace std;

int main() {
	char s[20];
	int i, j, f, c = 0;
	for (i = 1; i <= 5; i++) {
		scanf("%s", s);
		f = 0;
		for (j = 0; j < strlen(s) - 2; j++) {
			if (s[j] == 'F' && s[j + 1] == 'B' && s[j + 2] == 'I') {
				f = 1;
				break;
			}
		}
		if (f) {
			c++;
			printf("%d ", i);
		}
	}
	if (!c) printf("HE GOT AWAY!");
}