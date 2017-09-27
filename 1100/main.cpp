#include <cstdio>

using namespace std;

int main() {
	int i, j, c = 0;
	char r[10];
	for (i = 0; i < 8; i++) {
		scanf("%s", r);
		for (j = i % 2; j < 8; j += 2) if (r[j] == 'F') c++;
	}
	printf("%d", c);
}
