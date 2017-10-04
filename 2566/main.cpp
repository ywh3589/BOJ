#include <cstdio> 

using namespace std;

int main() {
	int max = 0, p = 0, i, j;
	for (i = 0; ~scanf("%d", &j); i++) {
		if (j > max) {
			max = j;
			p = i;
		}
	}
	printf("%d\n%d %d", max, p / 9 + 1, p % 9 + 1);
}