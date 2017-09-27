#include <cstdio>
#include <cstring>

using namespace std;

int main() {
	char str[10];
	int n, l, i, j;
	scanf("%d", &n);
	while (n--) {
		scanf("%d %s", &l, str);
		for (i = 0; i < strlen(str); i++) {
			for (j = 0; j < l; j++) printf("%c", str[i]);
		}
		printf("\n");
	}
}
