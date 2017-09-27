#include <cstdio>
#include <cstring>

using namespace std;

int main() {
	char str[1000001];
	int L, i = 0;
	scanf("%s", str);
	L = strlen(str);
	if (L % 3 == 2) {
		i = 2;
		printf("%d", 2 * (int)(str[0] - '0') + (int)(str[1] - '0'));
	}
	else if (L % 3 == 1) {
		i = 1;
		printf("%d", (int)(str[0] - '0'));
	}
	for (; i < L; i += 3) {
		printf("%d", 4 * (int)(str[i] - '0') + 2 * (int)(str[i+1] - '0') + (int)(str[i+2] - '0'));
	}
}
