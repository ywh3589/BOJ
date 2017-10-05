#include <cstdio>
#include <cstring>

using namespace std;

int main() {
	int n, i, p;
	char s[100];
	scanf("%d", &n);
	while(n--) {
		scanf("%d %s", &p, s);
		for (i = 0; i < strlen(s); i++) {
			if (i + 1 == p) continue;
			printf("%c", s[i]);
		}
		printf("\n");
	}
}