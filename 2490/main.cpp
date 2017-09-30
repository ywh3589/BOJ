#include <cstdio> 

using namespace std;

int main() {
	int s, i, j, k;
	for (i = 0; i < 3; i++) {
		s = 0;
		for (j = 0; j < 4; j++) {
			scanf("%d", &k);
			s += k;
		}
		if (s == 0) printf("D\n");
		else if (s == 1) printf("C\n");
		else if (s == 2) printf("B\n");
		else if (s == 3) printf("A\n");
		else printf("E\n");
	}
}