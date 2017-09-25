#include <cstdio>
#include <cstring>

using namespace std;

char *club[] = { "PROBRAIN", "GROW", "ARGOS", "ADMIN", "ANT", "MOTION", "SPG", "COMON", "ALMIGHTY" };

int main() {
	int n, i, j, s, max = 0, p;
	scanf("%d", &n);
	for (i = 0; i < 9; i++) {
		for (j = 0; j < n; j++) {
			scanf("%d", &s);
			if (s > max) {
				max = s;
				p = i;
			}
		}
	}
	printf("%s", club[p]);
}

