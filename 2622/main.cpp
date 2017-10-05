#include <cstdio>

using namespace std;

int main() {
	int a, i, j, c = 0;
	scanf("%d", &a);
	for (i = 1; i <= a / 3; i++) {
		for (j = i; j <= a - i - j && j <= a / 2; j++) {
			if (i + j > a - i - j) c++;
		}
	}
	printf("%d", c);
}